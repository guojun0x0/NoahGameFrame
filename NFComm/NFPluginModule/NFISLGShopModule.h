// -------------------------------------------------------------------------
//    @FileName         :    NFISLGShopModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2014-10-05
//    @Module           :    NFISLGShopModule
//
// -------------------------------------------------------------------------

#ifndef NFI_SLG_SHOP_MODULE_H
#define NFI_SLG_SHOP_MODULE_H

#include "NFIModule.h"

class NFISLGShopModule
    : public NFIModule
{
public:
    virtual bool ReqBuyItem(const NFGUID& self, const std::string& strID, float fX, float fY, float fZ) = 0;
};

#endif