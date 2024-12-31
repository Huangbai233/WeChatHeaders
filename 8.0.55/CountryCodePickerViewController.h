//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, WCSearcher;
@protocol CountryCodePickerDelegate;

@interface CountryCodePickerViewController
{
    id <CountryCodePickerDelegate> m_delegate;
    NSArray *m_arrData;
    unsigned int m_curSelectedSection;
    unsigned int m_curSelectedRow;
    MMTableView *m_tableView;
    _Bool m_bSearching;
    NSMutableArray *m_arrFilteredData;
    NSMutableArray *m_arrAllKeys;
    NSMutableDictionary *m_dicKeyToCountryCode;
    _Bool _hideCode;
    NSArray *_bannedCountryCodes;
    WCSearcher *_searcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) NSArray *bannedCountryCodes; // @synthesize bannedCountryCodes=_bannedCountryCodes;
@property(nonatomic) _Bool hideCode; // @synthesize hideCode=_hideCode;
@property(nonatomic) __weak id <CountryCodePickerDelegate> m_delegate; // @synthesize m_delegate;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearch:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCurSelectedCountryCode:(id)arg1;
- (void)scrollToSelected;
- (void)OnReturn;
- (void)viewDidLoad;
- (void)initSearchBar;
- (id)initWithBannedCountryCodes:(id)arg1;
- (id)init;
- (void)initData;
- (_Bool)shouldInteractiveDismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

