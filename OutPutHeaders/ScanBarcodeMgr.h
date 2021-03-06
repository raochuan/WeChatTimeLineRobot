/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString;

@interface ScanBarcodeMgr : MMService <MMService, PBMessageObserverDelegate> {
	NSString* _extKey;
	BOOL _isUploading;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* extKey;
-(void).cxx_destruct;
-(id)getHardCodeData;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)cancelUploading;
-(void)sendBarcode:(id)barcode andType:(id)type Scene:(unsigned)scene;
-(unsigned)getBarcodeType:(id)type;
-(void)dealloc;
-(id)init;
@end

