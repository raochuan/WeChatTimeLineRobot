/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "WCBaseControlMgrExt.h"
#import "StoreEmotionRewardAskForRewardCgiDelegate.h"
#import "MMUIViewControllerDelegate.h"

@class StoreEmotionRewardAskForRewardCgi, MMUIViewController, EmotionRewardResponseInfo, NSString, WCPayPayMoneyLogic, EmoticonStoreItem;

@interface StoreEmotionRewardLogicObject : MMObject <StoreEmotionRewardAskForRewardCgiDelegate, WCBaseControlMgrExt, MMUIViewControllerDelegate> {
	EmoticonStoreItem* m_storeItem;
	EmotionRewardResponseInfo* m_rewardInfo;
	MMUIViewController* m_rootViewController;
	MMUIViewController* m_askForRewardViewController;
	StoreEmotionRewardAskForRewardCgi* m_askForRewardCgi;
	WCPayPayMoneyLogic* m_payLogic;
	BOOL m_isAskingForReward;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)getViewController;
-(void)onWCBaseLogicDidStop:(unsigned long)onWCBaseLogic;
-(void)onAskForRewardCgiFailWithPid:(id)pid;
-(void)onAskForRewardCgiOkWithPid:(id)pid AndReqKey:(id)key;
-(void)presentThanksViewController;
-(void)finishReward;
-(void)cancelReward;
-(BOOL)isOnWeChatPay;
-(BOOL)askForRewardWithPrice:(id)price FromViewController:(id)viewController;
-(id)initWithStoreItem:(id)storeItem RewardInfo:(id)info FromRootViewController:(id)rootViewController;
-(void)dealloc;
@end

