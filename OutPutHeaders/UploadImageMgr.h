/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class UploadImageInfo, NSMutableArray;

@interface UploadImageMgr : MMObject <PBMessageObserverDelegate> {
	NSMutableArray* m_arrQueue;
	UploadImageInfo* m_oCurUpload;
}
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)UploadFail:(long)fail;
-(void)UploadOk:(id)ok;
-(BOOL)CreateUploadEvent:(unsigned long)event;
-(void)StartUploadImage:(id)image;
-(unsigned long)GetUploadPercent:(id)percent;
-(BOOL)IsUploading:(id)uploading;
-(void)CheckQueue;
-(unsigned long)GetTotalLen:(id)len;
-(void)dealloc;
-(id)init;
@end

