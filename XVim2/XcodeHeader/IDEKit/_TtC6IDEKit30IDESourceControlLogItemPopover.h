//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDESourceControlLogDetailDelegate;

@interface _TtC6IDEKit30IDESourceControlLogItemPopover : NSObject
{
    // Error parsing type: , name: actionMenu
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: relativeFilePath
    // Error parsing type: , name: logItem
    // Error parsing type: , name: delegate
    // Error parsing type: , name: detailDelegate
}

- (void).cxx_destruct;
- (id)init;
- (void)showPopoverWithRelativeTo:(struct CGRect)arg1 of:(id)arg2 preferredEdge:(unsigned long long)arg3 dark:(BOOL)arg4;
- (void)closePopover;
@property(nonatomic) __weak id <IDESourceControlLogDetailDelegate> detailDelegate; // @synthesize detailDelegate;

@end
