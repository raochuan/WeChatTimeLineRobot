/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCADQuestionStatItem : MMObject {
	NSString* nsPublishId;
	NSString* nsExpId;
	NSString* nsUxInfo;
	NSString* nsActionResult;
	unsigned long uiBeginTime;
	unsigned long uiEndTime;
}
@property(assign, nonatomic) unsigned long uiEndTime;
@property(assign, nonatomic) unsigned long uiBeginTime;
@property(retain, nonatomic) NSString* nsActionResult;
@property(retain, nonatomic) NSString* nsUxInfo;
@property(retain, nonatomic) NSString* nsExpId;
@property(retain, nonatomic) NSString* nsPublishId;
-(void).cxx_destruct;
@end

