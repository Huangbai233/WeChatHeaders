//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, MMTableViewInfo, MMUIButton, NSMutableArray, NSString, WCBaseTextFieldItem, WCPOIAddressPickerItem;
@protocol POICreateDelegate;

@interface WCTimelinePOICreateViewController
{
    NSString *_poiName;
    CLLocation *_location;
    MMTableViewInfo *_tableViewInfo;
    NSMutableArray *_infoItems;
    WCBaseTextFieldItem *_poiNameTextFieldItem;
    WCPOIAddressPickerItem *_districtPickerItem;
    WCBaseTextFieldItem *_addressTextFieldItem;
    WCBaseTextFieldItem *_categoryPickerItem;
    WCBaseTextFieldItem *_telephoneTextFieldItem;
    MMUIButton *_seeMoreButton;
    unsigned long long _geoTag;
    _Bool _lockSelection;
    _Bool _isLiteView;
    unsigned int _createPOICellIndex;
    NSString *_currentSearchID;
    id <POICreateDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <POICreateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *currentSearchID; // @synthesize currentSearchID=_currentSearchID;
@property(nonatomic) unsigned int createPOICellIndex; // @synthesize createPOICellIndex=_createPOICellIndex;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)onSelectedCategory:(id)arg1;
- (void)OnCreatePOI:(id)arg1 ID:(id)arg2 Error:(int)arg3;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)validateData;
- (void)onDone;
- (void)onReturn;
- (void)onSeeMore;
- (void)hideKeyboard;
- (void)selectAddress:(id)arg1;
- (void)initDistrict;
- (void)initOptionalData;
- (void)initRequiredData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPOIName:(id)arg1 Location:(id)arg2 Delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

