//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, MMRegionCodeMgr, MMRegionSeachResultsViewController, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UISearchController, UIViewController;
@protocol WCPayRegionPickerViewControllerDelegate;

@interface WCPayRegionPickerViewController
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    _Bool m_isInitRegionCode;
    NSString *m_selectedRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    NSArray *arrCurRegionCodes;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    _Bool m_bInCurrent;
    _Bool _isTopLevel;
    _Bool _openSearch;
    _Bool _chinaFirst;
    UIViewController *topController;
    id <WCPayRegionPickerViewControllerDelegate> _delegate;
    NSArray *_allRegions;
    UISearchController *_searchController;
    MMRegionSeachResultsViewController *_resultsController;
    NSArray *_foreignCountries;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) NSArray *foreignCountries; // @synthesize foreignCountries=_foreignCountries;
@property(retain, nonatomic) MMRegionSeachResultsViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *allRegions; // @synthesize allRegions=_allRegions;
@property(nonatomic) _Bool chinaFirst; // @synthesize chinaFirst=_chinaFirst;
@property(nonatomic) _Bool openSearch; // @synthesize openSearch=_openSearch;
@property(retain, nonatomic) NSArray *arrCurRegionCodes; // @synthesize arrCurRegionCodes;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=m_selectedRegionCode;
@property(nonatomic) __weak id <WCPayRegionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController;
- (id)getResultsWithRegion:(id)arg1;
- (void)didSelectRegion:(id)arg1;
- (void)selectForeignCountriesEntranceCell;
- (id)makeForeginEntrance:(id)arg1;
- (_Bool)isForeignCountriesEntranceCell:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)resultVC:(id)arg1 didSelectedRegion:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)setupSearch;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isLocationSection:(long long)arg1;
- (_Bool)isLocationRetrieving;
- (void)scrollToRegion:(id)arg1;
- (void)OnReturn;
- (void)OnDataChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupView;
- (void)initTableView;
- (void)initRegion;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
- (void)addToChina:(id)arg1 With:(id)arg2;
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

