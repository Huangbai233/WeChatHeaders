//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILongPressMenuView, NSString, UIButton;

@interface MMMailContactViewController
{
    NSString *_nsMailContactName;
    NSString *_nsMailContactAddress;
    _Bool _bShowSendBtn;
    MMTableView *_tableView;
    UIButton *_sendMailBtn;
    MMUILongPressMenuView *_nameView;
    MMUILongPressMenuView *_addressView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowSendBtn; // @synthesize bShowSendBtn=_bShowSendBtn;
@property(retain, nonatomic) NSString *nsMailContactAddress; // @synthesize nsMailContactAddress=_nsMailContactAddress;
@property(retain, nonatomic) NSString *nsMailContactName; // @synthesize nsMailContactName=_nsMailContactName;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)onSendMail:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

