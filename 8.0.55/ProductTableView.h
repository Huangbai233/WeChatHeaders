//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, MMTableView, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, ProductMediaItemView, ScanProductItem, UIView;
@protocol ProductTableViewDelegate;

@interface ProductTableView
{
    MMTableView *_tableView;
    NSString *_epName;
    NSString *_musicSinger;
    NSString *_thumbUrl;
    NSString *_productId;
    unsigned int _getA8KeyScence;
    unsigned int _jumpProfileScence;
    NSMutableArray *_musicInfoList;
    ProductMediaItemView *_mediaItemView;
    ScanProductItem *_productItem;
    NSMutableDictionary *_indexTextCellDict;
    MMUIViewController *_containerViewController;
    double _bottomInset;
    LocationRetriever *_locationRetriver;
    UIView *_footerView;
    id <ProductTableViewDelegate> _deleage;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ProductTableViewDelegate> deleage; // @synthesize deleage=_deleage;
@property(nonatomic) unsigned int jumpProfileScence; // @synthesize jumpProfileScence=_jumpProfileScence;
@property(nonatomic) unsigned int getA8KeyScence; // @synthesize getA8KeyScence=_getA8KeyScence;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *musicSinger; // @synthesize musicSinger=_musicSinger;
@property(retain, nonatomic) NSString *epName; // @synthesize epName=_epName;
- (void)mediaItemView:(id)arg1 openMediaUrl:(id)arg2 actionBase:(id)arg3 actionListCount:(unsigned long long)arg4;
- (void)onCellViewMore:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onPlayBtnClicked:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)genGridItemView:(id)arg1 withStatId:(id)arg2 gridItemListCount:(long long)arg3;
- (id)genDescLabel2Cell:(id)arg1;
- (id)genDigestLabel2Cell:(id)arg1;
- (id)genNameLabel2Cell:(id)arg1;
- (void)loadCommentCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadHeaderCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadReferCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadGridRowCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadCardCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadProductCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadMusicCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadImageCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadMediaCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadTextCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadUserCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadDetailCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadLinkCellSubView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (void)loadCellBgImageView:(id)arg1 actionBase:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isHiddenCell:(id)arg1;
- (_Bool)isBannerCell:(id)arg1;
- (id)getSystemAppID:(unsigned int)arg1;
- (id)getServiceContant:(id)arg1;
- (void)dealloc;
- (void)initMusicList;
- (void)initView;
- (void)layoutSubviews;
- (void)initTableView;
- (void)setTableInset;
- (id)getTextCellByIndexPath:(id)arg1;
- (void)reloadTableData:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)getTableView;
- (id)initWithFrame:(struct CGRect)arg1 ProductItem:(id)arg2 ViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

