//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTOpenQuicklyPattern : NSObject
{
    NSString *_pattern;
    BOOL _patternHasSeparators;
    char *_charactersInPattern;
    unsigned short *_patternCharacters;
    unsigned short *_lowerCasePatternCharacters;
    unsigned long long _patternLength;
    BOOL _emphasizesCaseSensitiveMatches;
}

+ (id)patternWithInput:(id)arg1;
- (void).cxx_destruct;
@property BOOL emphasizesCaseSensitiveMatches; // @synthesize emphasizesCaseSensitiveMatches=_emphasizesCaseSensitiveMatches;
@property(readonly) NSString *pattern; // @synthesize pattern=_pattern;
- (double)scoreCandidate:(id)arg1 considerExtension:(BOOL)arg2 matchedRanges:(id *)arg3;
- (double)scoreCandidate:(id)arg1 matchedRanges:(id *)arg2;
- (double)scoreCandidate:(id)arg1 considerFileExtension:(BOOL)arg2;
- (double)scoreCandidate:(id)arg1;
- (BOOL)matchesCandidate:(id)arg1;
- (BOOL)matchesEverythingMatchedBy:(id)arg1;
- (BOOL)rejectsEverything;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (void)dealloc;
- (id)initWithPattern:(id)arg1;
- (id)matchedRanges:(id)arg1;

@end

