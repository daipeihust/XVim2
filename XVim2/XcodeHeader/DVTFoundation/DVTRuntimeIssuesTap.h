//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DVTRuntimeIssuesTap : NSObject
{
    NSMutableDictionary *_deviceCallerPidToTapMap;
    BOOL _useThirdPartyPredicate;
}

+ (void)cancelTapForToken:(id)arg1;
+ (void)cancelTapForPid:(int)arg1 caller:(id)arg2 device:(id)arg3;
+ (id)startTapForPid:(int)arg1 onDevice:(id)arg2 caller:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_runtimeIssuesConfigForPid:(int)arg1;
- (id)_keyForDevice:(id)arg1 caller:(id)arg2 pid:(int)arg3;
- (void)cancelTapForToken:(id)arg1;
- (void)cancelTapForPid:(int)arg1 caller:(id)arg2 device:(id)arg3;
- (id)startTapForPid:(int)arg1 onDevice:(id)arg2 caller:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)init;

@end
