//
//  XVimDefs.h
//  XVim
//
//  Created by Suzuki Shuichiro on 7/27/13.
//
//

#ifndef XVim_XVimDefs_h
#define XVim_XVimDefs_h

#import <Foundation/Foundation.h>

#ifndef NS_REQUIRES_SUPER
#if __has_attribute(objc_requires_super)
#define NS_REQUIRES_SUPER __attribute__((objc_requires_super))
#else
#define NS_REQUIRES_SUPER
#endif
#endif

typedef NS_ENUM(NSInteger, XVIM_CURSOR_MODE) { XVIM_CURSOR_MODE_INSERT, XVIM_CURSOR_MODE_COMMAND };

typedef NS_ENUM(NSUInteger, XVimInsertionPoint) {
    XVIM_INSERT_DEFAULT,
    XVIM_INSERT_SPACES,
    XVIM_INSERT_APPEND,
    XVIM_INSERT_BEFORE_FIRST_NONBLANK,
    XVIM_INSERT_APPEND_EOL,
    XVIM_INSERT_BLOCK_KILL,
};

typedef NS_ENUM(NSUInteger, XVIM_MODE) {
    XVIM_MODE_NONE,
    XVIM_MODE_NORMAL,
    XVIM_MODE_CMDLINE,
    XVIM_MODE_INSERT,
    XVIM_MODE_OPERATOR_PENDING,
    XVIM_MODE_VISUAL,
    XVIM_MODE_SELECT,
    XVIM_MODE_COUNT, // This is the count of modes
};

typedef NS_ENUM(NSUInteger, XVIM_VISUAL_MODE) {
    XVIM_VISUAL_NONE,
    XVIM_VISUAL_CHARACTER, // for 'v'
    XVIM_VISUAL_LINE, // for 'V'
    XVIM_VISUAL_BLOCK, // for 'CTRL-V'
};

typedef NS_ENUM(NSUInteger, XVIM_VISUAL_CORNER) {
    _XVIM_VISUAL_RIGHT = 1,
    _XVIM_VISUAL_BOTTOM = 2,

    XVIM_VISUAL_TOPLEFT = 0,
    XVIM_VISUAL_TOPRIGHT = 1,
    XVIM_VISUAL_BOTTOMLEFT = 2,
    XVIM_VISUAL_BOTTOMRIGHT = 3,
};

typedef NS_ENUM(NSUInteger, XVIM_SCROLL_TYPE) {
    XVIM_SCROLL_TYPE_PAGE,
    XVIM_SCROLL_TYPE_HALF_PAGE,
    XVIM_SCROLL_TYPE_LINE,
};

typedef NS_ENUM(NSInteger, XVIM_SCROLL_DIRECTION) {
    XVIM_SCROLL_DIRECTION_UP = -1,
    XVIM_SCROLL_DIRECTION_DOWN = 1,
};

typedef NS_OPTIONS(NSUInteger, XVimSortOptions) {
    XVimSortOptionReversed = 1,
    XVimSortOptionRemoveDuplicateLines = 1 << 1,
    XVimSortOptionNumericSort = 1 << 2,
    XVimSortOptionIgnoreCase = 1 << 3
};

typedef struct {
    NSUInteger begin; // begin may be greater than end
    NSUInteger end;
} XVimRange;

typedef struct {
    NSUInteger line;
    NSUInteger column;
} XVimPosition;

typedef struct {
    XVIM_VISUAL_CORNER corner;
    NSUInteger top;
    NSUInteger left;
    NSUInteger bottom;
    NSUInteger right;
} XVimSelection;

#define XVimSelectionEOL (NSIntegerMax - 1)

NS_INLINE XVimRange XVimMakeRange(NSUInteger begin, NSUInteger end)
{
    XVimRange r;
    r.begin = begin;
    r.end = end;
    return r;
}

NS_INLINE XVimPosition XVimMakePosition(NSUInteger line, NSUInteger column)
{
    XVimPosition p;
    p.line = line;
    p.column = column;
    return p;
}

NS_INLINE XVimRange XVimRangeSwap(XVimRange range) { return XVimMakeRange(range.end, range.begin); }

/** Returns an NSRange from start to end inclusive
 */
NS_INLINE NSRange XVimMakeNSRange(XVimRange range) { return NSMakeRange(range.begin, range.end - range.begin + 1); }

typedef NS_ENUM(NSUInteger, XVIM_TEXT_TYPE) {
    XVIM_TEXT_TYPE_CHARACTERS,
    XVIM_TEXT_TYPE_BLOCK,
    XVIM_TEXT_TYPE_LINES
};

typedef NSMutableString XVimMutableString;

typedef NSString XVimString;
#endif
