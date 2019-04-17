// Fill out your copyright notice in the Description page of Project Settings.

#include "GameLibrary.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetArrayLibrary.h"
#include "Engine/World.h"
#include "Array.h"
#include "authenticationUe4.h"
#include "Logging/MessageLog.h"
#include "UnrealString.h"

// захардкожено если будут новые переменные в структуре лезть сюда и разбираться!
FCharacterData UGameLibrary::StringToStruct(FString data)
{		
	if (data.Len()<1)
	{
		return FCharacterData();
	}
	else
	{
		//MaxHealth110.0Health110.0RecoveryHealth2.0MaxStamina227.399902Stamina227.399902RecoveryStamina4.0MaxManna403.0Manna403.0RecoveryManna8.0PhysicalResist51.0MagicResist11.0AffectionResist1.1Karma0.5
		FString localdata = data;
		FString FieldsName[13] = { "MaxHealth","Health","RecoveryHealth","MaxStamina","Stamina","RecoveryStamina","MaxManna","Manna","RecoveryManna","PhysicalResist","MagicResist","AffectionResist","Karma" };		
		float FieldsData[13];
		for (int i=0; i<13; i++)
		{			
			if (i == 12)
			{					
				//FieldsData[i] = UKismetStringLibrary::Conv_StringToFloat(localdata.Mid(FieldsName[i].Len() + data.Find(FieldsName[i], ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE), data.Len() - ((FieldsName[i].Len() + data.Find(FieldsName[i], ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE)))));
				//localdata.Find(FieldsName[i], ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE);//find substring
				//FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE);//find substring + len				
				FieldsData[i] = UKismetStringLibrary::Conv_StringToFloat(localdata.Mid(FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE), localdata.Len()-(FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE))));
			}
			else
			{	
				//localdata.Find(FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len()));//find substring 1							
				//localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE);//find substring 2
				//FieldsName[i].Len()+ localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE);//find substring 2 + len
				//localdata.Mid(FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE),(localdata.Find(FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len()))- FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE)));//get substring 2
				FieldsData[i] = UKismetStringLibrary::Conv_StringToFloat(localdata.Mid(FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE), (localdata.Find(FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len())) - FieldsName[i].Len() + localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE))));//записываем значение найденого показателя в массив
				
				//localdata.Mid(localdata.Find(FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len())),(localdata.Len() - (FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len()))));//get substring 1
				localdata = localdata.Mid(localdata.Find(FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len())), (localdata.Len() - (FieldsName[i + 1], ESearchCase::IgnoreCase, ESearchDir::FromStart, (localdata.Find(FieldsName[i], ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE) + FieldsName[i].Len()))));//Set new LocalData				
			}
		}
		FCharacterData localCharacterData;
		localCharacterData.MaxHealth = FieldsData[0];
		localCharacterData.Health = FieldsData[1];
		localCharacterData.RecoveryHealth = FieldsData[2];
		localCharacterData.MaxStamina = FieldsData[3];
		localCharacterData.Stamina = FieldsData[4];
		localCharacterData.RecoveryStamina = FieldsData[5];
		localCharacterData.MaxManna = FieldsData[6];
		localCharacterData.Manna = FieldsData[7];
		localCharacterData.RecoveryManna = FieldsData[8];
		localCharacterData.PhysicalResist = FieldsData[9];
		localCharacterData.MagicResist = FieldsData[10];
		localCharacterData.AffectionResist = FieldsData[11];
		localCharacterData.Karma = FieldsData[12];
		UE_LOG(LogTemp, Display, TEXT("String Convernt to FCharacterData Success"));
		//MaxHealth110.0Health110.0RecoveryHealth2.0MaxStamina227.399902Stamina227.399902RecoveryStamina4.0MaxManna403.0Manna403.0RecoveryManna8.0PhysicalResist51.0MagicResist11.0AffectionResist1.1Karma0.5
		return localCharacterData;		
	}
}


