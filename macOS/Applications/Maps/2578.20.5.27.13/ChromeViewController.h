//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKMapViewDelegate-Protocol.h"
#import "MKMapViewDelegatePrivate-Protocol.h"

@class ChromeModeCoordinationScheduler, GEOMapServiceTraits, MKMapView, MapsChromeViewItem, NSArray, NSDate, NSMutableArray, NSMutableSet, NSString, NSTimer, UIView, UserLocationView;
@protocol ChromeModeController;

__attribute__((visibility("hidden")))
@interface ChromeViewController : UIViewController <MKMapViewDelegate, MKMapViewDelegatePrivate>
{
    NSMutableArray *_itemsStack;
    UserLocationView *_userLocationView;
    MKMapView *_mapView;
    UIView *_mapReplacementView;
    BOOL _isViewLoading;
    BOOL _topModeWasSentModeWillDidAppear;
    BOOL _chromeDidReceiveModeWillAppear;
    BOOL _chromeDidReceiveModeDidAppear;
    BOOL _isAnyModeCurrent;
    BOOL _isTopModeBecomingCurrent;
    BOOL _isMapViewDisownedByPrepareMethods;
    BOOL _animatingMapInsets;
    double _reAnimateMapInsetsRequestedWithDuration;
    long long _currentlyRunningLabelEdgeInsetsAnimationsCount;
    NSMutableSet *_modesBeingRemoved;
    unsigned long long _clientsAllowingInsetsAnimation;
    BOOL _hasAttemptedLoadingViewportChangeDateFromDefaults;
    BOOL _hasEverScheduledSavingViewportChangeDateInDefaults;
    NSDate *_lastViewportChangeDate;
    NSTimer *_lastViewportSaveTimer;
    unsigned long long _layoutsCount;
    BOOL _isChangingMapViewFrame;
    ChromeModeCoordinationScheduler *_modeCoordinator;
    BOOL _suppressed;
    BOOL _inactive;
    BOOL _changingCurrentMode;
    NSString *_searchContextDefaultsKeysPrefix;
    UIView *_containingView;
    id <ChromeModeController> _modeBecomingCurrent;
    id <ChromeModeController> _modeResigningCurrent;
}

+ (Class)userLocationViewClass;
+ (Class)containingViewClass;
+ (Class)chromeViewItemClass;
+ (BOOL)canTransitionWithoutMap;
+ (id)localizedLocationAuthorizationTitle;
+ (id)localizedLocationAuthorizationMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <ChromeModeController> modeResigningCurrent; // @synthesize modeResigningCurrent=_modeResigningCurrent;
@property(readonly, nonatomic) __weak id <ChromeModeController> modeBecomingCurrent; // @synthesize modeBecomingCurrent=_modeBecomingCurrent;
@property(readonly, nonatomic, getter=isChangingCurrentMode) BOOL changingCurrentMode; // @synthesize changingCurrentMode=_changingCurrentMode;
@property(retain, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property(copy, nonatomic) NSString *searchContextDefaultsKeysPrefix; // @synthesize searchContextDefaultsKeysPrefix=_searchContextDefaultsKeysPrefix;
@property(nonatomic, getter=isInactive) BOOL inactive; // @synthesize inactive=_inactive;
@property(nonatomic, getter=isSuppressed) BOOL suppressed; // @synthesize suppressed=_suppressed;
- (void)dismissAllModalViewsIfPresentAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDate *enteredForegroundDate;
- (void)didUnsuppress;
- (void)willUnsuppress;
- (void)didSuppress;
@property(readonly, nonatomic) NSDate *lastViewportChangedDate;
- (id)_lastViewportChangeDateLoadingFromDefaultsIfNeeded;
- (void)_saveLastViewportChangeDate;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (BOOL)_shouldRecordViewportChange;
- (BOOL)_shouldSaveLastViewportChangeDateInDefaults;
- (id)_lastViewportChangeDateDefaultsKey;
@property(readonly, nonatomic) GEOMapServiceTraits *newTraits;
- (id)mapViewDelegateForSelector:(SEL)arg1;
@property(readonly, nonatomic) id mapViewDelegate;
- (void)_setLocalizedStringsForMapView:(id)arg1;
@property(readonly, nonatomic) UIView *passThroughView;
@property(readonly, nonatomic) BOOL removesMapViewWhenInactive;
- (void)_setInactive:(BOOL)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) UserLocationView *userLocationView;
@property(retain, nonatomic) MKMapView *mapView;
- (void)pushTopItemOnTopOfStackAfterViewLoadIfNeeded;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3;
- (void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3;
- (void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2;
- (void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2;
- (void)_removeMapReplacementView;
- (void)reinsertMapViewInViewHierarchy;
- (void)addReplacementViewToViewHierarchy:(id)arg1;
- (void)_replaceMapWithView:(id)arg1;
@property(readonly, nonatomic) UIView *mapOrReplacementView;
@property(readonly, nonatomic) UIView *mapReplacementView;
- (id)createMapReplacementView;
- (void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 retainOwnershipOfMapView:(BOOL)arg2;
- (void)setVKApplicationUILayout:(long long)arg1;
- (void)performAllowingInsetsAnimation:(CDUnknownBlockType)arg1;
- (BOOL)_updateInsets;
- (void)setLabelEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 animationShouldHideLabelsAtStart:(BOOL)arg2;
- (void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1;
- (void)invalidateMapInsetsAnimated:(BOOL)arg1 duration:(double)arg2;
- (void)invalidateMapInsetsAnimated:(BOOL)arg1;
- (void)invalidateMapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets labelEdgeInsets;
- (struct UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets mapAttributionInsets;
- (void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentModeDuration:(double)arg1;
- (void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentMode;
- (void)setMapEdgeInsets:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2 forMode:(id)arg3;
- (void)setMapEdgeInsets:(struct UIEdgeInsets)arg1 forMode:(id)arg2;
@property(readonly, nonatomic) struct CGRect unobscuredMapContentBoundsInContainingView;
- (void)layoutForUnobscuredBoundsChange;
- (void)mapViewInstanceDidChange;
- (void)loadMapViewIfNeeded;
- (void)loadView;
- (id)mapReplacementColor;
@property(readonly, nonatomic, getter=isViewLoadedOrLoading) BOOL viewLoadedOrLoading;
- (void)didLoadView;
- (void)willLoadView;
@property(readonly, nonatomic) MapsChromeViewItem *topItem;
@property(copy, nonatomic) NSArray *modes;
@property(readonly, nonatomic) NSArray *itemsStack;
- (void)cancelWhenNextCurrentActionWithKey:(id)arg1 forMode:(id)arg2;
- (BOOL)isWhenNextCurrentActionScheduledWithKey:(id)arg1 forMode:(id)arg2;
- (void)whenModeNextBecomesCurrent:(id)arg1 performActionWithKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_removeWhenNextCurrentBlocksDictionaryFromMode:(id)arg1;
- (void)_invokeWhenNextCurrentBlocksForMode:(id)arg1 animated:(BOOL)arg2;
- (id)_whenNextCurrentBlocksDictionaryForMode:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (void)_performTransitionWithAnimation:(BOOL)arg1 toItem:(id)arg2 fromItem:(id)arg3 itemsLeavingTheStack:(id)arg4 byChangingStackInBlock:(CDUnknownBlockType)arg5;
- (void)viewDidLayoutSubviews;
- (id)_newChromeItemForMode:(id)arg1;
- (void)commitCoordinatedModeChange;
- (void)setFallbackModeCoordinationBlock:(CDUnknownBlockType)arg1;
- (void)scheduleCoordinatedModeChange:(CDUnknownBlockType)arg1;
- (id)_modeCoordinator;
- (void)setModes:(id)arg1 animated:(BOOL)arg2;
- (void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(BOOL)arg3;
- (void)replaceTopModeWithMode:(id)arg1 animated:(BOOL)arg2;
- (void)_popToItem:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)popToRootModeAnimated:(BOOL)arg1;
- (void)popToMode:(id)arg1 animated:(BOOL)arg2;
- (void)popModeAnimated:(BOOL)arg1;
- (void)pushMode:(id)arg1 animated:(BOOL)arg2;
- (id)chromeViewItemForMode:(id)arg1;
@property(readonly, nonatomic) id <ChromeModeController> topMode;
@property(readonly, nonatomic) id <ChromeModeController> currentMode;
- (BOOL)isTopMode:(id)arg1;
- (BOOL)isCurrentMode:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct CGPoint)mapView:(id)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;
- (void)mapViewDidFinishInitialUserTrackingModeAnimation:(id)arg1;
- (void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapViewDidAnimateInAnnotationViews:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;
- (id)mapViewCurrentRouteMatch:(id)arg1;
- (void)mapViewDidFinishCalloutExpansion:(id)arg1;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(BOOL)arg5 tiltDirection:(long long)arg6;
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(BOOL)arg3;
- (void)mapViewDidStopUserInteraction:(id)arg1;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (void)mapView:(id)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapViewARSessionInterruptionEnded:(id)arg1;
- (void)mapView:(id)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapView:(id)arg1 didEncounterARError:(id)arg2;
- (void)mapViewDidExitAR:(id)arg1;
- (void)mapViewDidEnterAR:(id)arg1;
- (void)mapViewWillEnterAR:(id)arg1;
- (void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
- (void)mapView:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
- (void)mapViewWillStartFlyoverTour:(id)arg1;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapView:(id)arg1 didChangeMuninAvailability:(long long)arg2;
- (void)mapView:(id)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapView:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)mapViewWillAnimateInAnnotationViews:(id)arg1;
- (void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (BOOL)mapViewShouldHandleTapToDeselect:(id)arg1;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (BOOL)mapView:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;
- (BOOL)_mapViewCanChangeUserTrackingModeWhenRegionDidChange:(id)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4;
- (double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4;
- (void)mapView:(id)arg1 willChangeRotation:(double)arg2;
- (void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)mapView:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)dismissInterruption;
- (CDUnknownBlockType)presentUnhandledInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)presentInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

