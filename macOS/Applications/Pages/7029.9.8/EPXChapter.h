//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EPXHtmlDocument.h"

@class EPXSChapter, EPXText, NSMutableSet;

@interface EPXChapter : EPXHtmlDocument
{
    EPXSChapter *mState;
    EPXText *mTextContainer;
    NSMutableSet *mAddedBookmarkIDs;
}

+ (BOOL)createChapterInStream:(id)arg1 outChapter:(id *)arg2 state:(id)arg3;
- (void).cxx_destruct;
- (BOOL)tearDown;
- (void)cancel;
- (BOOL)setUp;
- (id)textContainer;
- (void)addBookmarkWithName:(id)arg1;
- (void)addSubHeadingWithID:(id)arg1 href:(id)arg2 title:(id)arg3 headingElementName:(id)arg4;
- (id)state;
- (id)initWithTextWriterProvider:(id)arg1 state:(id)arg2;
- (BOOL)writeAdditionalNamespaces;
- (BOOL)writeChapterHeader;

@end

