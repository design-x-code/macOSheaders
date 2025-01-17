//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AutocompleteContextDelegate-Protocol.h"
#import "MKLocalSearchCompleterDelegate-Protocol.h"
#import "MKLocalSearchCompleterDelegatePrivate-Protocol.h"
#import "PersonalizedItemManagerObserver-Protocol.h"
#import "SearchBarSearchManagerDelegate-Protocol.h"
#import "SearchDataProviding-Protocol.h"

@class AutocompleteContext, AutocompleteItemManager, AutocompleteItemSource, GEOMapServiceTraits, GEORetainedSearchMetadata, GEOSearchCategory, MKAutocompleteAnalyticsProvider, MKLocalSearchCompleter, NSArray, NSNumber, NSString, PersonalizedItemAutocompleteFilter, PersonalizedItemManager, RAPAutoCompleteSearchManager, SearchBarSearchManager, UserLocationSearchResult;
@protocol GEOMapServiceCompletionTicket, SearchDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface SearchDataProvider : NSObject <AutocompleteContextDelegate, MKLocalSearchCompleterDelegate, SearchBarSearchManagerDelegate, MKLocalSearchCompleterDelegatePrivate, PersonalizedItemManagerObserver, SearchDataProviding>
{
    NSArray *_sections;
    NSString *_inputText;
    double _inputTextTimestamp;
    NSString *_trimmedInputText;
    AutocompleteContext *_autocompleteInputContext;
    GEOMapServiceTraits *_traits;
    MKLocalSearchCompleter *_searchCompleter;
    SearchBarSearchManager *_localSearchManager;
    BOOL _finishedLocalCompletions;
    BOOL _finishedServerCompletions;
    AutocompleteItemManager *_deduplicator;
    AutocompleteItemSource *_serverCompletionsItemSource;
    AutocompleteItemSource *_localCompletionsItemSource;
    int _autocompleteChangeCounter;
    NSArray *_sortedCombinedResults;
    AutocompleteContext *_autocompleteContext;
    PersonalizedItemAutocompleteFilter *_personalizedItemsFilter;
    unsigned int _searchRequestAnalyticsSequenceNumber;
    MKAutocompleteAnalyticsProvider *_autocompleteAnalyticsState;
    NSArray *_autocompleteAnalyticsSuggestions;
    double _lastTicketRetainSearchTime;
    BOOL _shouldEnableRAPForNoResults;
    NSNumber *_shouldShowRapStorage;
    BOOL _lastRequestIsRetainQuery;
    BOOL _showAutocompleteClientSource;
    BOOL _hasShowAutocompleteClientSource;
    BOOL _shouldEnableGrayscaleHighlighting;
    BOOL _active;
    BOOL _enableRAPIfAvailable;
    BOOL _contentUpdatedOnNoResults;
    unsigned int _searchMode;
    GEOSearchCategory *_inputCategory;
    UserLocationSearchResult *_userLocationSearchResult;
    GEORetainedSearchMetadata *_retainedSearchMetadata;
    RAPAutoCompleteSearchManager *_autoCompleteSearchRAPManager;
    PersonalizedItemManager *_mapPersonalizedItems;
    id <GEOMapServiceCompletionTicket> _lastTicket;
    id <SearchDataProviderDelegate> _delegate;
    unsigned long long _resultTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AutocompleteItemSource *localCompletionsItemSource; // @synthesize localCompletionsItemSource=_localCompletionsItemSource;
@property(retain, nonatomic) AutocompleteItemSource *serverCompletionsItemSource; // @synthesize serverCompletionsItemSource=_serverCompletionsItemSource;
@property(nonatomic, getter=isContentUpdatedOnNoResults) BOOL contentUpdatedOnNoResults; // @synthesize contentUpdatedOnNoResults=_contentUpdatedOnNoResults;
@property(nonatomic, getter=shouldEnableRAPIfAvailable) BOOL enableRAPIfAvailable; // @synthesize enableRAPIfAvailable=_enableRAPIfAvailable;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) unsigned long long resultTypes; // @synthesize resultTypes=_resultTypes;
@property(nonatomic) __weak id <SearchDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL shouldEnableGrayscaleHighlighting; // @synthesize shouldEnableGrayscaleHighlighting=_shouldEnableGrayscaleHighlighting;
@property(readonly, nonatomic) BOOL hasShowAutocompleteClientSource; // @synthesize hasShowAutocompleteClientSource=_hasShowAutocompleteClientSource;
@property(readonly, nonatomic) BOOL showAutocompleteClientSource; // @synthesize showAutocompleteClientSource=_showAutocompleteClientSource;
@property(readonly, nonatomic) AutocompleteContext *autocompleteInputContext; // @synthesize autocompleteInputContext=_autocompleteInputContext;
@property(readonly, nonatomic) AutocompleteContext *autocompleteContext; // @synthesize autocompleteContext=_autocompleteContext;
@property(readonly, nonatomic) unsigned int searchRequestAnalyticsSequenceNumber; // @synthesize searchRequestAnalyticsSequenceNumber=_searchRequestAnalyticsSequenceNumber;
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket; // @synthesize lastTicket=_lastTicket;
@property(retain, nonatomic) PersonalizedItemManager *mapPersonalizedItems; // @synthesize mapPersonalizedItems=_mapPersonalizedItems;
@property(retain, nonatomic) RAPAutoCompleteSearchManager *autoCompleteSearchRAPManager; // @synthesize autoCompleteSearchRAPManager=_autoCompleteSearchRAPManager;
@property(readonly, nonatomic) BOOL lastRequestIsRetainQuery; // @synthesize lastRequestIsRetainQuery=_lastRequestIsRetainQuery;
@property(retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata; // @synthesize retainedSearchMetadata=_retainedSearchMetadata;
@property(retain, nonatomic) UserLocationSearchResult *userLocationSearchResult; // @synthesize userLocationSearchResult=_userLocationSearchResult;
@property(retain, nonatomic) GEOSearchCategory *inputCategory; // @synthesize inputCategory=_inputCategory;
@property(nonatomic) unsigned int searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)processPersonalizedItemsDebug:(id)arg1;
- (void)_processNewAutocompleteList;
- (void)personalizedItemManager:(id)arg1 didChangeItems:(id)arg2;
- (void)personalizedItemManagerWillChangeItems:(id)arg1;
- (void)clearMKLocalSearchCompleterQueryState;
- (void)_completerWasThrottled:(id)arg1 queryFragment:(id)arg2;
- (void)completer:(id)arg1 didFailWithError:(id)arg2 forQueryFragment:(id)arg3;
- (void)completer:(id)arg1 didUpdateResultsWithSections:(id)arg2 forQueryFragment:(id)arg3;
- (void)receivedSearchResults:(id)arg1 forContext:(id)arg2;
- (void)resetRAPRecorder;
- (void)recordRAPResults;
@property(readonly, nonatomic) BOOL shouldShowRap;
- (void)ensureTraitsHaveDefaultValues:(id)arg1;
@property(readonly, nonatomic) double retainSearchTime;
- (void)reset;
- (void)updateDeduper;
- (void)updateAnalyticsStateWithContext:(id)arg1 suggestionEntries:(id)arg2;
- (void)setInputText:(id)arg1 tappedQuerySuggestionCompletion:(id)arg2 isRetainQuery:(BOOL)arg3 traits:(id)arg4 source:(int)arg5;
- (void)setInputText:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)setFinishedServerCompletions:(BOOL)arg1;
- (void)setFinishedLocalCompletions:(BOOL)arg1;
- (int)autocompleteChangeCounter;
- (int)exclusiveIncrementAutocompleteChangeCounter;
- (void)incrementAutocompleteChangeCounter;
- (void)clearAutocompleteResults;
- (void)autocompleteContext:(id)arg1 didUpdateMatchInfo:(id)arg2;
- (void)refreshAnalyticsState;
- (id)autocompleteAnalyticsSuggestionsFromSections:(id)arg1 context:(id)arg2 subactionMetaData:(id)arg3 indexOfResultWithSubactionMetadata:(id)arg4;
- (id)autocompleteAnalyticsSuggestionsFromSections:(id)arg1 context:(id)arg2;
- (void)_dataChanged;
- (BOOL)_shouldShowResults;
- (id)buildContent;
- (void)populateContext;
@property(readonly, nonatomic) BOOL hasResults;
- (void)setSearchCompletionFilterType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

