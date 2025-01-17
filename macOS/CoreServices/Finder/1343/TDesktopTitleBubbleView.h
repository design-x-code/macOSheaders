//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDrawRectView.h"

#import "NSViewToolTipOwner-Protocol.h"
#import "TImageAttachmentContainer-Protocol.h"

@class NSAttributedString, NSColor, NSString;

@interface TDesktopTitleBubbleView : TDrawRectView <TImageAttachmentContainer, NSViewToolTipOwner>
{
    struct TDesktopTitleMetrics _textMetrics;
    struct TString _toolTip;
    struct CGSize _idealSize;
    _Bool _isSelected;
    _Bool _isDragItem;
    _Bool _useActiveAppearance;
    _Bool _useDesktopSelectionColor;
    _Bool _useAutoLayoutInPreviewPane;
    _Bool _includeShadowPadding;
    _Bool _drawAntiAliased;
    _Bool _isOverlappingTitle;
    struct TNSRef<NSColor, void> _superViewsBackgroundColor;
    vector_12bd641b _tagColorIndexes;
    TNSRef_69374e60 _iCloudBadgeView;
    struct TNSRef<TUpdateLayerView, void> _imageAttachmentPlaceholder;
    struct TNSRef<NSImage, void> _imageAttachment;
    _Bool _isDimmed;
    struct TNotificationCenterObserver _desktopWindowMainStateChangedObserver;
}

+ (id)iconViewAppearanceSelectionColor:(_Bool)arg1;
+ (id)desktopAppearanceSelectionColor:(_Bool)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool useDesktopSelectionColor; // @synthesize useDesktopSelectionColor=_useDesktopSelectionColor;
@property(nonatomic) _Bool useAutoLayoutInPreviewPane; // @synthesize useAutoLayoutInPreviewPane=_useAutoLayoutInPreviewPane;
@property(nonatomic) _Bool drawAntiAliased; // @synthesize drawAntiAliased=_drawAntiAliased;
- (void)setICloudBadge:(int)arg1 keepPlaceHolder:(_Bool)arg2 placeHolder:(TNSRef_69374e60 *)arg3 clickHandler:(const function_d3afe2e2 *)arg4 context:(int)arg5;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (id)iCloudBadgePlaceholderView;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)setToolTip:(id)arg1;
- (id)toolTip;
- (void)updateTrackingAreas;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (vector_a9587b3d)lineBubbleFrames;
- (_Bool)intersectsRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (_Bool)setImageAttachment:(id)arg1 toolTip:(const struct TString *)arg2;
- (_Bool)hasImageAttachment;
- (void)removeICloudBadgeView;
- (_Bool)setICloudBadgeClickHandler:(const function_d3afe2e2 *)arg1 context:(int)arg2 forBadge:(int)arg3;
- (_Bool)isICloudBadgeVisible;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)showBubble;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @dynamic dimmed;
@property(retain, nonatomic) NSColor *superViewsBackgroundColor; // @dynamic superViewsBackgroundColor;
@property(nonatomic) _Bool includeShadowPadding; // @dynamic includeShadowPadding;
@property(nonatomic, getter=isOverlappingTitle) _Bool overlappingTitle; // @dynamic overlappingTitle;
@property(nonatomic) _Bool useActiveAppearance; // @dynamic useActiveAppearance;
@property(nonatomic, getter=isDragItem) _Bool dragItem; // @dynamic dragItem;
- (void)setTagColorIndexes:(const vector_12bd641b *)arg1;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;
@property(nonatomic) unsigned long long maxLines;
- (void)invalidateIdealSize;
- (struct CGSize)idealSize;
- (struct CGRect)bubbleFrame;
- (struct CGRect)titleFrame;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)_superSetBoundsSize:(const struct CGSize *)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_superSetFrameSize:(const struct CGSize *)arg1;
- (void)setFrameOrBoundsSizeHelper:(const struct CGSize *)arg1 oldSize:(const struct CGSize *)arg2 sizeChangerFunc:(const function_ec296439 *)arg3;
- (void)setMaxSize:(struct CGSize)arg1;
- (void)setMinSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSAttributedString *attrString; // @dynamic attrString;
- (void)desktopWindowMainStateChanged;
- (unsigned long long)linesToDrawNotTruncated;
- (void)drawRect:(struct CGRect)arg1;
- (id)selectionColor:(_Bool)arg1;
- (void)layout;
- (pair_9764cbd7)placeholderImageAttachmentFrameAt:(int)arg1 finalExtraSizer:(const function_cfc04f3f *)arg2;
- (_Bool)_isActive;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (pair_2447b6e7)lineFragmentAndBaselineForCharAtIndex:(unsigned long long)arg1 layoutManager:(id)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_windowChangedKeyState;
- (void)dealloc;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

