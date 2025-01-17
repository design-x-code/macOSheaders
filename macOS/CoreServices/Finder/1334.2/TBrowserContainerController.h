//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

#import "NSMenuItemValidation-Protocol.h"
#import "TMarkTornDown-Protocol.h"
#import "TNodeObserverProtocol-Protocol.h"
#import "TSaveSearchSheetControllerDelegate-Protocol.h"
#import "TSidebarViewControllerDelegate-Protocol.h"
#import "TStatusBarDelegateProtocol-Protocol.h"
#import "TTagColumnTableViewControllerDelegate-Protocol.h"

@class NSObject, NSString, NSViewController, TBackupContainerDelegate, TBrowserViewController, TContainerLayoutManager, TNodeViewSettings, TSidebarSplitViewController;
@protocol BrowserContainerTargeting><BrowserContainerSearching><BrowserContainerDelegate;

@interface TBrowserContainerController : TViewController <TNodeObserverProtocol, NSMenuItemValidation, TSaveSearchSheetControllerDelegate, TStatusBarDelegateProtocol, TMarkTornDown, TTagColumnTableViewControllerDelegate, TSidebarViewControllerDelegate>
{
    _Bool _containerIsBeingCreated;
    _Bool _browserViewIsBeingCreated;
    _Bool _browserViewIsBeingDestroyed;
    _Bool _switchingViewStyleBeforeRecreatingBrowserView;
    struct TNSWeakPtr<NSObject<BrowserContainerDelegate, BrowserContainerSearching, BrowserContainerTargeting>, void> _weakDelegate;
    struct TNSRef<TBackupContainerDelegate, void> _backupDelegate;
    struct TNSRef<TBrowserViewController, void> _browserViewController;
    struct TFENodeVector _targetPath;
    struct shared_ptr<TNodeObserverCocoaBridge> _targetPathObserver;
    _Bool _targetNodeIsBrowsable;
    TNodeViewSettings *_viewSettings;
    struct TNSRef<TBrowserViewDataSource, void> _dataSource;
    NSViewController *_bannerViewController;
    struct TNSRef<TBrowserViewSwitchAnimator, void> _viewSwitchAnimator;
    _Bool _isSwitchingViewStyle;
    struct TNSRef<TWindowHistory, void> _history;
    struct TFENodeVector _springRememberedTargetPath;
    int _springRememberedViewStyle;
    unsigned long long _itemCount;
    unsigned long long _selectedNodesCount;
    int _viewStyle;
    int _previousViewStyleSeenByDelegates;
    int _defaultViewStyle;
    struct TFENode _initialTarget;
    _Bool _forceSetTargetPath;
    _Bool _targetIsPopulated;
    int _groupBy;
    _Bool _binding;
    _Bool _doNotResetFirstResponder;
    _Bool _isPopulationInProgress;
    _Bool _isSearchInProgress;
    _Bool _smartDiscardTargetIsStored;
    _Bool _smartDiscardRebuildView;
    int _smartDiscardSearchAction;
    struct TFENodeVector _smartDiscardTargetPath;
    int _smartDiscardViewStyle;
    struct shared_ptr<TNodeObserverCocoaBridge> _publishedFolderNodeObserver;
    unsigned long long _serialID;
    struct TString _suggestionsScopeQuery;
    _Bool _usesSuggestions;
    struct TNSRef<NSTimer, void> _loadingUIStartTimer;
    struct TNSRef<NSTimer, void> _loadingUIEndCheckTimer;
    _Bool _wantToShowLoadingUI;
    TContainerLayoutManager *_containerLayoutManager;
    struct TNotificationCenterObserver _alwaysOpenWithChangedObserver;
    struct TNotificationCenterObserver _airDropAvailabilityChangedObserver;
    struct TNotificationCenterObserver _iCloudOverQuotaChangedObserver;
    struct TNotificationCenterObserver _viewDidMoveToWindowObserver;
    struct TNotificationCenterObserver _dataSourceBusyObserver;
    struct TKeyValueBinder _groupByBinder;
    struct TKeyValueBinder _selectedNodesCountBinder;
    struct TKeyValueBinder _itemCountBinder;
    TNSWeakPtr_971ddea6 _delayNextPreviewPaneRetargetToken;
    struct TNSRef<TSidebarSplitViewController, void> _sidebarSplitViewController;
    struct TNotificationCenterObserver _isSidebarCollapsedObserver;
    _Bool _showSidebar;
    _Bool _previewVisibleState;
    _Bool _flushDataSourceAllowed;
    _Bool _isTornDown;
}

+ (_Bool)shouldShowPathBarForTarget:(const struct TFENode *)arg1;
+ (id)defaultContainerStateForNode:(const struct TFENode *)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)shouldForwardSelectorToViewController:(SEL)arg1;
+ (_Bool)suggestionsFrameworkAvailable;
+ (id)defaultFileSuggesters;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TContainerLayoutManager *containerLayoutManager; // @synthesize containerLayoutManager=_containerLayoutManager;
@property(retain, nonatomic) TNodeViewSettings *viewSettings; // @synthesize viewSettings=_viewSettings;
@property(nonatomic) _Bool flushDataSourceAllowed; // @synthesize flushDataSourceAllowed=_flushDataSourceAllowed;
@property(nonatomic) _Bool isSearchInProgress; // @synthesize isSearchInProgress=_isSearchInProgress;
@property(nonatomic) _Bool isPopulationInProgress; // @synthesize isPopulationInProgress=_isPopulationInProgress;
@property(nonatomic) _Bool binding; // @synthesize binding=_binding;
@property(nonatomic) int smartDiscardSearchAction; // @synthesize smartDiscardSearchAction=_smartDiscardSearchAction;
@property(nonatomic) _Bool targetIsPopulated; // @synthesize targetIsPopulated=_targetIsPopulated;
@property(nonatomic) int defaultViewStyle; // @synthesize defaultViewStyle=_defaultViewStyle;
@property(nonatomic) unsigned long long selectedNodesCount; // @synthesize selectedNodesCount=_selectedNodesCount;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(readonly, nonatomic) _Bool containerIsBeingCreated; // @synthesize containerIsBeingCreated=_containerIsBeingCreated;
- (_Bool)handleQuickLookWithEvent:(id)arg1;
- (_Bool)nodeIsSpringable:(const struct TFENode *)arg1;
- (void)springSidebarNode:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (void)saveShowSidebarStateToPrefs;
- (void)sidebarDidChangeCollapsedState:(id)arg1;
- (void)stopEditingInPreviewPane:(_Bool)arg1;
- (_Bool)startEditingInPreviewPaneWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)cmdTogglePreviewOptions:(id)arg1;
- (_Bool)validateTogglePreviewOptions:(id)arg1;
- (id)previewController;
- (void)cmdTogglePreviewPane:(id)arg1;
- (_Bool)validateTogglePreviewPane:(id)arg1;
- (struct CGRect)previewColumnFrameInWindow;
- (void)configurePreviewPane:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePreviewPaneTarget;
- (struct TFENodeVector)previewPaneTarget;
- (_Bool)canShowPreviewPane;
- (_Bool)previewColumnIsVisible;
- (void)configureTagsColumn:(_Bool)arg1;
- (_Bool)tagsColumnHasFocus;
- (struct CGRect)tagsColumnFrameInWindow;
- (_Bool)tagsColumnIsVisible;
- (_Bool)shouldShowTagsColumn;
- (void)configureBrowserSplitView;
- (id)browserSplitViewController;
- (void)setSidebarWidthForScripting:(double)arg1;
- (double)sidebarWidthForScripting;
- (_Bool)nodeIsExcluded:(const struct TFENode *)arg1;
- (_Bool)nodeIsDimmed:(const struct TFENode *)arg1;
- (void)iCloudIsOverQuotaDidChange;
- (void)publishedFolderListDidChange;
- (void)nodeObserver:(struct TNodeObserver *)arg1 aliasTargetChanged:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeGoingAway:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeMoved:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeDeleted:(const struct TFENode *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeChanged:(const struct TFENode *)arg2 inObservedNode:(const struct TFENode *)arg3 property:(unsigned int)arg4;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeAdded:(const struct TFENode *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)configureAccessoryViews:(id)arg1;
- (void)configureAccessoryViewsForTargetChange;
- (void)configurePersistentViewsWithState:(id)arg1;
- (_Bool)isShowingICloudDriveContent;
- (void)flushDatasource;
- (void)createBrowserViewWithViewStyle:(int)arg1 containerState:(id)arg2;
- (Class)iconBrowserClassForTarget;
- (Class)browserClassForViewStyle:(int)arg1;
- (_Bool)browserDefaultsToGroupView;
- (void)destroyBrowserView:(_Bool)arg1;
- (_Bool)containerCanClose;
- (void)aboutToTearDown;
- (void)closeContainer;
- (void)switchToViewStyle:(int)arg1;
- (void)setPreferredViewStyle:(int)arg1;
@property(nonatomic) int viewStyle;
- (void)finishedInstallingContainer;
- (void)buildBrowserView:(_Bool)arg1 containerState:(id)arg2;
- (void)buildBrowserView:(_Bool)arg1;
- (void)setupViewSwitchAnimator;
- (id)viewSwitchAnimator;
- (void)updateWindowRestoreState;
- (id)browserViewContainerController;
- (struct CGRect)browserViewContainerBounds;
- (struct CGRect)browserColumnFrameInWindow;
- (struct CGImage *)newSidebarImageForFullScreenAnimationInitialCoverWindow:(struct CGRect *)arg1;
- (struct CGImage *)newSidebarImageForFullScreenAnimation:(struct CGRect *)arg1;
- (struct CGRect)sidebarColumnFrameInWindow:(_Bool)arg1;
- (struct CGSize)idealContentSize;
- (void)windowDidChange;
- (void)containerContentChanged;
- (_Bool)validateForward:(id)arg1;
- (_Bool)validateBack:(id)arg1;
- (void)historyChanged;
- (void)cmdToggleSearchSlices:(id)arg1;
- (_Bool)validateToggleSearchSlices:(id)arg1;
- (void)tagColumnTableViewController:(id)arg1 selectedTagNodeChanged:(const struct TFENode *)arg2;
- (id)browserViewControllerForTagColumn:(id)arg1;
- (void)cmdTogglePathBar:(id)arg1;
- (_Bool)validateTogglePathBar:(id)arg1;
- (void)cmdRenameInAllTagsColumn:(id)arg1;
- (_Bool)validateRenameInAllTagsColumn:(id)arg1;
- (void)cmdToggleSidebar:(id)arg1;
- (_Bool)validateToggleSidebar:(id)arg1;
- (void)cmdViewAsGallery:(id)arg1;
- (_Bool)validateViewAsGallery:(id)arg1;
- (void)cmdViewAsColumns:(id)arg1;
- (_Bool)validateViewAsColumns:(id)arg1;
- (void)cmdViewAsList:(id)arg1;
- (_Bool)validateViewAsList:(id)arg1;
- (void)cmdViewAsIcons:(id)arg1;
- (_Bool)validateViewAsIcons:(id)arg1;
- (_Bool)targetAllowsStandardViewStyles;
- (void)computeMarkForMenuItem:(id)arg1 viewStyle:(int)arg2;
- (void)cmdViewAsSubmenu:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1 withObject:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)saveQuery:(_Bool)arg1;
- (id)userSearchSlices;
- (int)saveSearchWithName:(const struct TString *)arg1 inDestination:(const struct TFENode *)arg2 addToSidebar:(_Bool)arg3;
- (void)searchSaveSheetDismissedWithCode:(long long)arg1;
- (void)searchWasSaved;
- (void)configureForSearchAction:(int)arg1 forSearchString:(id)arg2;
- (void)addingSearchToolbarItem:(id)arg1;
- (void)searchFieldTextChanged;
- (struct TString)backupBrowserSnapshotPath;
- (id)currentSearchField;
- (_Bool)panelDisableNode:(const struct TFENode *)arg1;
- (_Bool)allowsBrowsingPackages;
- (_Bool)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (_Bool)canBrowseNode:(const struct TFENode *)arg1;
- (_Bool)isAppCentric;
- (_Bool)isICloud;
- (_Bool)allowsNewDocumentButton;
- (_Bool)shouldShowPathBarForTarget:(const struct TFENode *)arg1;
- (void)airDropAvailabilityChanged;
- (void)configureForAirDrop:(_Bool)arg1;
- (id)splitViewForToolbarAlignment;
- (_Bool)sidebarIsVisible;
- (_Bool)shouldShowSidebarSplitter;
- (_Bool)isSprungAwayFromOriginalTarget;
- (void)revertToPreviousSpringState;
- (void)receivingDrag;
- (void)forgetSpringState;
- (void)rememberSpringState;
- (void)retargetOnDeletedNode:(struct TFENode)arg1;
- (void)configureSidebarForMode:(_Bool)arg1;
- (id)window;
- (_Bool)inBrowseMode;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (struct TFENodeVector)reduceRootedPath:(const struct TFENodeVector *)arg1;
- (struct TFENode)sidebarTarget;
- (_Bool)truncateTargetPathAtNode:(const struct TFENode *)arg1 selectNode:(_Bool)arg2;
- (void)targetPathAliasTargetChanged:(const struct TFENode *)arg1;
- (void)targetPathNodeGoingAway:(const struct TFENode *)arg1;
- (void)targetPathNodeMoved:(const struct TFENode *)arg1;
- (void)targetPathNodeDeleted:(const struct TFENode *)arg1;
- (void)targetPathNodeChanged:(const struct TFENode *)arg1 property:(unsigned int)arg2;
- (void)updateTargetPathObserver:(const struct TFENodeVector *)arg1 newTargetPath:(const struct TFENodeVector *)arg2;
- (void)openLocation:(const struct TFENode *)arg1 origin:(shared_ptr_3b64c573)arg2;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (void)openSelection;
- (void)retargetContainerForTarget:(const struct TFENode *)arg1 to:(const struct TFENodeVector *)arg2;
- (void)replaceUnresolvedTarget:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
- (void)backForwardCommon:(_Bool)arg1;
- (void)gotoHistoryEntry:(id)arg1;
- (_Bool)isBrowsingSystemFolder;
- (const struct TFENodeVector *)targetPath;
- (const struct TFENode *)initialTarget;
- (struct TFENode)target;
- (void)setTargetPath:(const struct TFENodeVector *)arg1;
- (void)forceSetTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(int)arg2;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(int)arg2;
- (void)notifyViewStyleChanged;
- (void)notifyTargetPathChanged;
- (void)notifyTargetPathWillChange;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(int)arg2 rebuildView:(_Bool)arg3;
- (void)retargetToNodeAndComputePath:(const struct TFENode *)arg1;
- (void)alwaysOpenWithChanged;
- (void)showDiscardSmartFolderSheetForAction:(int)arg1;
- (void)showDiscardSmartFolderSheetForAction:(int)arg1 target:(const struct TFENodeVector *)arg2 viewStyle:(int)arg3 rebuildView:(_Bool)arg4;
- (void)completeSetTargetWithStoredValues;
- (void)updateSidebarSelectionForCurrentTarget;
- (_Bool)browserViewHasFocus;
- (void)selectNodesLater:(const struct TFENodeVector *)arg1;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (void)browserSelectionChanged;
- (void)configureContainerWithState:(id)arg1;
- (void)addToHistory:(const struct TFENodeVector *)arg1 windowState:(id)arg2;
- (void)unlockOverlayScrollerStateOnMainThread;
- (void)unlockOverlayScrollerState;
- (void)lockOverlayScrollersToHiddenState;
- (void)viewContentChanged;
- (id)nodeViewSettings;
- (void)setCurrentSearchFieldState:(id)arg1;
- (id)currentSearchFieldState;
- (id)containerState:(_Bool)arg1;
- (id)windowState;
- (int)viewStyleFromState:(id)arg1;
- (_Bool)isDesktop;
- (void)viewDidAppear;
- (void)configureView;
- (id)initWithWindowState:(id)arg1 targetPath:(const struct TFENodeVector *)arg2 containerLayoutManager:(id)arg3 containerDelegate:(id)arg4;
- (void)initCommon;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)configureLoadingUI:(_Bool)arg1;
- (void)startLoadingUI;
- (void)checkLoadingUIEnd;
- (void)stopLoadingUIEndCheckTimer;
- (void)stopLoadingUIStartTimer;
- (_Bool)shouldShowLoadingUI;
- (_Bool)isLoadingUIInProgress;
- (struct TFENode)parentNodeToOpen:(const struct TFENode *)arg1;
- (struct TString)pathPrettyStringForNode:(struct TFENode)arg1;
- (struct TFENodeVector)popupPathForNode:(const struct TFENode *)arg1;
- (struct TFENode)mapToUserVisibleCloudLocation:(const struct TFENode *)arg1;
- (struct TFENode)theICloudNode;
- (_Bool)isTheICloudNode:(const struct TFENode *)arg1;
- (struct TFENode)mobileDocumentsFolderForNode:(struct TFENode)arg1;
- (struct TString)titleForICloudContainer:(const struct TFENode *)arg1;
- (struct TFENode)cloudContainerForNode:(const struct TFENode *)arg1;
- (int)cloudFolderTypeForNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsAnICloudRoot:(const struct TFENode *)arg1;
- (_Bool)iCloudNodeIsUserVisible:(const struct TFENode *)arg1;
- (_Bool)isCloudDesktopOrDocumentsNode:(const struct TFENode *)arg1;
- (_Bool)isCloudDesktopOrDocumentsDescendantNode:(const struct TFENode *)arg1;
- (_Bool)targetHasCloudLibraries;
- (struct TFENode)cloudLibrariesContainer;
- (struct TFENode)cloudDocsNodeForNode:(struct TFENode)arg1;
- (_Bool)nodeIsInICloud:(const struct TFENode *)arg1 allowQueryHits:(_Bool)arg2;
- (_Bool)isBackupDeleteAllowed;
- (_Bool)isValidTargetForSnapshot:(const struct TFENode *)arg1;
- (void)mapBackupSelectionToContainer:(const struct TFENode *)arg1 outSelection:(struct TFENodeVector *)arg2;
- (_Bool)displaceNodesToNewPoints:(const struct TFENodeVector *)arg1;
- (void)clearSpaceForRestoringNodes:(const struct TFENodeVector *)arg1 outOverlapping:(struct TFENodeVector *)arg2;
- (id)restoreImages;
- (struct TFENode)targetForOriginalNode:(struct TFENode)arg1;
- (struct TFENode)liveViewSettingsNodeForNode:(const struct TFENode *)arg1;
- (struct TFENode)originalNodeForNode:(const struct TFENode *)arg1;
- (void)adjustWindowProxyNode:(struct TFENode *)arg1;
@property(readonly) const struct TFENode *snapshotNode;
- (shared_ptr_253687d6)snapshotTarget;
@property(readonly, nonatomic) _Bool isTimeMachineBrowser;
- (_Bool)isSnapshotImageBrowser;
- (_Bool)isBackupBrowser;
- (id)contextMenuDelegate;
- (struct TFENodeVector)newTargetPathForNode:(const struct TFENode *)arg1 existingPath:(const struct TFENodeVector *)arg2;
- (void)cmdGotoHistoryPosition:(id)arg1;
- (id)history;
- (void)cmdForward:(id)arg1;
- (void)cmdBack:(id)arg1;
- (void)searchWasChanged;
- (void)searchDidBeginWithScopes:(const vector_757c8b87 *)arg1 selectedScopeIndex:(unsigned int)arg2;
- (_Bool)searchSlicesAreVisible;
- (_Bool)shouldUseSuggestions;
- (struct TString)searchScopeName;
- (void)tryFocusingSearchField;
- (id)searchFieldText;
- (_Bool)targetIsEditedSmartFolder;
- (_Bool)targetIsUnsavedSmartFolder;
- (void)setPathBarTarget;
- (void)configurePathBar:(_Bool)arg1;
- (_Bool)pathBarIsVisible;
- (void)configureBanner;
- (void)sidebarDidChangeVisibility:(_Bool)arg1;
- (_Bool)bannerIsVisible;
- (void)tearDownPersistentViews;
- (void)commonFinishInitialization:(id)arg1;
- (void)unbindViewSettings;
- (void)bindViewSettings;
- (void)updatePreviewVisibleState:(_Bool)arg1;
- (void)configureBrowserView:(id)arg1;
- (void)tearDownAccessoryViews;
- (_Bool)shouldEnableShareButton;
- (_Bool)canShare;
- (void)clickedOnDisabledNode:(const struct TFENode *)arg1;
- (_Bool)canClickDimmedNodes;
- (_Bool)allowsMultipleSelection;
- (_Bool)canSelectNode:(const struct TFENode *)arg1;
- (_Bool)canMoveItemsToTrash;
- (_Bool)canRenameItems;
- (_Bool)canDuplicateItems;
@property(readonly, nonatomic) TSidebarSplitViewController *sidebarSplitViewController;
- (void)reloadGroupView;
- (void)resolveReplicaNodesInTargetPath;
@property(nonatomic) int groupBy;
- (void)resetHistory;
- (void)targetToSearch:(_Bool)arg1;
- (unsigned int)defaultSearchScope;
- (void)updateSearchTarget:(struct TFENode)arg1;
- (void)updateQueryWithScopeIndex:(unsigned long long)arg1 clearContent:(_Bool)arg2;
- (void)searchFieldCancel;
- (_Bool)showScopeBar;
- (void)configureSearchBannerSettingTarget:(_Bool)arg1;
- (void)configureSuggestions;
- (_Bool)usesSuggestions;
- (_Bool)isSearchForSliceVisible;
- (id)searchSliceController;
- (struct TMDQueryAliasNode *)savedSearchTarget;
- (struct TMDQueryAliasNode *)searchTarget;
- (void)hideOverlayScrollers;
- (void)drawCompletelyIntoBackBuffer;
- (_Bool)shouldCheckChildrenForTags;
- (int)calculatedGroupBy;
- (_Bool)shouldSortFoldersFirstForSortBy:(int)arg1 groupBy:(int)arg2;
- (_Bool)shouldSortInIncreasingOrderForSortBy:(int)arg1;
- (_Bool)shouldShowRecents;
- (int)sortBy;
- (void)viewDidFullyPopulate;
- (void)viewDidSyncToDataSource:(const vector_274a36ec *)arg1;
- (void)setViewFullyPopulatedHandler:(const function_b1fce659 *)arg1;
- (void)setViewSyncedToDataSourceHandler:(const function_b1fce659 *)arg1 forTarget:(struct TFENode)arg2;
@property(retain, nonatomic) TBackupContainerDelegate *backupDelegate; // @dynamic backupDelegate;
@property(readonly, retain, nonatomic) TBrowserViewController *browserViewController; // @dynamic browserViewController;
- (id)browserWindowController;
@property(nonatomic) __weak NSObject<BrowserContainerTargeting><BrowserContainerSearching><BrowserContainerDelegate> *delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

