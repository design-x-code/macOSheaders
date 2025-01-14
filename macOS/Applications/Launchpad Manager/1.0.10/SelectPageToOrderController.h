//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSMatrix, NSTextField;

@interface SelectPageToOrderController : NSViewController
{
    NSTextField *tf1;
    NSMatrix *matrix;
    id <SelectPageToOrderDelegate> delegate;
    int numberOfPages;
}

@property(retain) id <SelectPageToOrderDelegate> delegate; // @synthesize delegate;
@property NSMatrix *matrix; // @synthesize matrix;
- (id)pagesToOrder;
- (void)sort:(id)arg1;
- (void)cancel:(id)arg1;
- (void)unCheckAll:(id)arg1;
- (void)checkAll:(id)arg1;
- (void)createPageSelectors:(int)arg1;
- (id)init;

@end

