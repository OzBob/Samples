﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "MyUserControl.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "MyUserControl.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_MyString(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->MyString;
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_MyString(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->MyString = safe_cast<TValue^>(value);
}

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    bool    isLocalType;
    bool    isSystemType;
    bool    isReturnTypeStub;
    bool    isBindable;
};

const TypeInfo TypeInfos[] = 
{
    //   0
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   1
    L"NativePackage.MyUserControl", L"",
    &ActivateType<::NativePackage::MyUserControl>, nullptr, nullptr, nullptr,
    4, // Windows.UI.Xaml.Controls.UserControl
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    true,  false, false, false,
    //   2
    L"NativePackage.MyCustomControl", L"",
    &ActivateType<::NativePackage::MyCustomControl>, nullptr, nullptr, nullptr,
    3, // Windows.UI.Xaml.Controls.Control
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    true,  false, false, false,
    //   3
    L"Windows.UI.Xaml.Controls.Control", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    1, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   4
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    1, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    1, 0,::Windows::UI::Xaml::Interop::TypeKind::Custom,
    false, false, false, false,
};

const UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      1,   //   7
      1,   //   8
      1,   //   9
      1,   //  10
      1,   //  11
      1,   //  12
      1,   //  13
      1,   //  14
      1,   //  15
      1,   //  16
      1,   //  17
      1,   //  18
      1,   //  19
      1,   //  20
      1,   //  21
      1,   //  22
      1,   //  23
      1,   //  24
      1,   //  25
      1,   //  26
      1,   //  27
      2,   //  28
      2,   //  29
      3,   //  30
      3,   //  31
      3,   //  32
      4,   //  33
      4,   //  34
      4,   //  35
      4,   //  36
      5,   //  37
};

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

const MemberInfo MemberInfos[] = 
{
    //   0 - NativePackage.MyCustomControl.MyString
    L"MyString",
    &GetReferenceTypeMember_MyString<::NativePackage::MyCustomControl>,
    &SetReferenceTypeMember_MyString<::NativePackage::MyCustomControl, ::Platform::String>,
    0, // String
    -1,
    false, true,  false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}

const TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    int typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

const MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    for (int lastDotIndex = longMemberName->Length(); lastDotIndex >= 0; lastDotIndex--)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            const TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
    }
    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->isSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->isLocalType;
        userType->IsReturnTypeStub = pTypeInfo->isReturnTypeStub;
        userType->IsBindable = pTypeInfo->isBindable;
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    const MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}
