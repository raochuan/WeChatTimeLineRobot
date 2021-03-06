/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IAppDataExt <NSObject>
@optional
-(void)OnNewAppStatusChanged;
-(void)OnAppInfoChanged:(id)changed;
-(void)OnAppWatermarkChanged:(id)changed;
-(void)OnAppIconChanged:(id)changed;
-(void)OnAppRegisterInfoChanged;
-(void)OnAppSettingChanged;
-(void)OnGotBizAppInfo;
-(void)OnGotAppPersonalInfoList:(id)list errType:(int)type;
-(void)OnGotAuthAppList:(id)list errType:(int)type;
-(void)OnGotListAppSettingItem:(id)item errType:(int)type;
-(void)OnUpdateAppAuthState:(id)state errType:(int)type;
-(void)OnUpdateAppRecvMsgState:(id)state appSettingFlag:(int)flag errType:(int)type;
@end

