/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSMutableArray;

@interface WCDeviceStepObject : MMObject {
	unsigned long beginTime;
	unsigned long endTime;
	unsigned long m7StepCount;
	unsigned long hkStepCount;
	NSMutableArray* allHKSampleSource;
}
@property(retain, nonatomic) NSMutableArray* allHKSampleSource;
@property(assign, nonatomic) unsigned long hkStepCount;
@property(assign, nonatomic) unsigned long m7StepCount;
@property(assign, nonatomic) unsigned long endTime;
@property(assign, nonatomic) unsigned long beginTime;
-(void).cxx_destruct;
@end

