//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMTableView, NSMutableArray, NSString, UIButton, UIView, WCDevice;
@protocol WCMyDeviceInfoAssistDelegate;

@interface WCMyDeviceInfoAssist
{
    id <WCMyDeviceInfoAssistDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_headerView;
    UIView *m_footerView;
    MMLoadingView *m_loadingView;
    UIButton *m_bindBtn;
    UIButton *m_unbindBtn;
    UIButton *m_urlBtn;
    NSMutableArray *m_arrSectionType;
    _Bool m_isMyDevice;
    WCDevice *_deviceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDevice *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)onManageCellClicked:(long long)arg1;
- (void)onRemarkNameEdit:(id)arg1;
- (double)deviceDescLabelWidth;
- (id)GetLoadingView;
- (id)GetTableView;
- (void)onClickNavRightButton;
- (void)onUpdateMyDeviceNickNameWithDeviceId:(id)arg1 nickName:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)getLoadingText;
- (void)onUnbindDevice;
- (void)onRemark;
- (void)onBindDevice;
- (void)onShowDeviceSession;
- (void)makeDeviceManageCell:(id)arg1 rowData:(id)arg2;
- (void)makeRemarkCell:(id)arg1;
- (void)makeLanDeviceOwnerCell:(id)arg1;
- (void)makeDeviceDescCell:(id)arg1;
- (void)makeDeviceInfoCell:(id)arg1;
- (double)calManagerCell;
- (double)calDeviceDescCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned int)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateNavigationBarRightButton;
- (void)updateFooterView;
- (void)updateData;
- (void)initFooterView;
- (void)initLoadingView;
- (void)initTableView;
- (id)initWithMyDeviceInfo:(id)arg1 delegate:(id)arg2;
- (void)updateRelationState;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

