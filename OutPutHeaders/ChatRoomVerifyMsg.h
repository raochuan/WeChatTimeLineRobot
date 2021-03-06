/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface ChatRoomVerifyMsg : XXUnknownSuperclass {
	unsigned long createTime;
	unsigned long msgSvrID;
	NSString* chatRoomName;
	NSString* inviterName;
	NSString* inviterNickName;
	unsigned long scene;
	NSString* desc;
	NSString* ticket;
	NSString* userName;
	NSString* userNickName;
	NSString* country;
	NSString* province;
	NSString* city;
	NSString* hdHeadImgUrl;
	NSString* headImgUrl;
	NSString* sign;
	NSString* weibo;
	NSString* weiboNickname;
	unsigned long albumFlag;
	unsigned long albumStyle;
	NSString* albumBgId;
	unsigned long snsFlag;
	NSString* snsBgId;
	unsigned long snsBgObjId;
	BOOL isRead;
	BOOL isVerified;
	unsigned long snsObjId;
}
@property(assign, nonatomic) unsigned long snsObjId;
@property(retain, nonatomic) NSString* snsBgId;
@property(assign, nonatomic) unsigned long snsFlag;
@property(retain, nonatomic) NSString* albumBgId;
@property(assign, nonatomic) unsigned long albumStyle;
@property(assign, nonatomic) unsigned long albumFlag;
@property(retain, nonatomic) NSString* weiboNickname;
@property(retain, nonatomic) NSString* weibo;
@property(retain, nonatomic) NSString* sign;
@property(retain, nonatomic) NSString* headImgUrl;
@property(retain, nonatomic) NSString* hdHeadImgUrl;
@property(retain, nonatomic) NSString* city;
@property(retain, nonatomic) NSString* province;
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) NSString* userNickName;
@property(retain, nonatomic) NSString* userName;
@property(assign, nonatomic) BOOL isVerified;
@property(assign, nonatomic) BOOL isRead;
@property(retain, nonatomic) NSString* ticket;
@property(retain, nonatomic) NSString* desc;
@property(assign, nonatomic) unsigned long scene;
@property(retain, nonatomic) NSString* inviterNickName;
@property(retain, nonatomic) NSString* inviterName;
@property(retain, nonatomic) NSString* chatRoomName;
@property(assign, nonatomic) unsigned long msgSvrID;
@property(assign, nonatomic) unsigned long createTime;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

