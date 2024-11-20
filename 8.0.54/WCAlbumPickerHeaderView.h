//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, NSArray;

@interface WCAlbumPickerHeaderView : UICollectionReusableView
{
    MMUILabel *_albumTimeLabel;
    NSArray *_monthArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *monthArray; // @synthesize monthArray=_monthArray;
@property(retain, nonatomic) MMUILabel *albumTimeLabel; // @synthesize albumTimeLabel=_albumTimeLabel;
- (_Bool)isTodayOrYesterday:(id)arg1;
- (void)setTimeStr:(id)arg1 showYearLabel:(_Bool)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
