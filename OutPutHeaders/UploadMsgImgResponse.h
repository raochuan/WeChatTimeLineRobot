/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinString_t, BaseResponse;

@interface UploadMsgImgResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long newMsgId;
@property(assign, nonatomic) unsigned createTime;
@property(assign, nonatomic) unsigned dataLen;
@property(assign, nonatomic) unsigned startPos;
@property(assign, nonatomic) unsigned totalLen;
@property(retain, nonatomic) SKBuiltinString_t* toUserName;
@property(retain, nonatomic) SKBuiltinString_t* fromUserName;
@property(retain, nonatomic) SKBuiltinString_t* clientImgId;
@property(assign, nonatomic) unsigned msgId;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

