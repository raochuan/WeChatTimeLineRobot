/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSDictionary, NSData, NSString;

@interface UrlInfo : XXUnknownSuperclass <NSCopying> {
	NSString* m_nsRequestUrl;
	NSData* m_dtResponseData;
	NSString* m_nsRefer;
	BOOL m_bGetMethod;
	NSData* m_dtBodyData;
	NSDictionary* m_dicReq;
	NSDictionary* m_dicResp;
	BOOL m_bCdn;
	NSString* m_nsRequestUrlSuffix;
	unsigned long m_uiRecvTime;
	unsigned long m_uiRetCode;
	unsigned long m_uiDataSize;
	unsigned long m_uiDnsCostTime;
	unsigned long m_uiConnectCostTime;
	unsigned long m_uiSendCostTime;
	unsigned long m_uiWaitResponseCostTime;
	unsigned long m_uiReceiveCostTime;
	NSString* m_nsClientIP;
	NSString* m_nsServerIP;
	unsigned long m_uiDnsType;
	NSString* m_host;
	NSString* m_nsXErrno;
	NSString* m_fileMd5;
	BOOL m_bSupportValidateMd5;
	BOOL m_bContinueReceive;
	NSString* m_filePath;
	BOOL m_useDCIP;
	BOOL m_useXorEncrypt;
	unsigned long long m_xorEncryKey;
	NSString* m_nsXEnc;
}
@property(retain, nonatomic) NSString* m_nsXEnc;
@property(assign, nonatomic) unsigned long long m_xorEncryKey;
@property(assign, nonatomic) BOOL m_useXorEncrypt;
@property(assign, nonatomic) BOOL m_useDCIP;
@property(assign, nonatomic) BOOL m_bSupportValidateMd5;
@property(retain, nonatomic) NSString* m_fileMd5;
@property(retain, nonatomic) NSString* m_filePath;
@property(assign, nonatomic) BOOL m_bContinueReceive;
@property(retain, nonatomic) NSString* m_nsXErrno;
@property(retain, nonatomic) NSString* m_nsRequestUrlSuffix;
@property(retain, nonatomic) NSString* m_host;
@property(assign, nonatomic) unsigned long m_uiDnsType;
@property(retain, nonatomic) NSString* m_nsServerIP;
@property(retain, nonatomic) NSString* m_nsClientIP;
@property(assign, nonatomic) unsigned long m_uiReceiveCostTime;
@property(assign, nonatomic) unsigned long m_uiWaitResponseCostTime;
@property(assign, nonatomic) unsigned long m_uiSendCostTime;
@property(assign, nonatomic) unsigned long m_uiConnectCostTime;
@property(assign, nonatomic) unsigned long m_uiDnsCostTime;
@property(assign, nonatomic) unsigned long m_uiDataSize;
@property(assign, nonatomic) unsigned long m_uiRetCode;
@property(assign, nonatomic) unsigned long m_uiRecvTime;
@property(assign, nonatomic) BOOL m_bCdn;
@property(retain, nonatomic) NSDictionary* m_dicResp;
@property(retain, nonatomic) NSDictionary* m_dicReq;
@property(retain, nonatomic) NSData* m_dtBodyData;
@property(assign, nonatomic) BOOL m_bGetMethod;
@property(retain, nonatomic) NSString* m_nsRefer;
@property(retain, nonatomic) NSData* m_dtResponseData;
@property(retain, nonatomic) NSString* m_nsRequestUrl;
-(void).cxx_destruct;
-(id)GenStatStringWithDataType:(int)dataType;
-(id)GenStatString;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

