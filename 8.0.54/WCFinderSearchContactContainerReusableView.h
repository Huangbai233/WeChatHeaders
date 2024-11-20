//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UICollectionReusableView.h>

@class WCFinderSearchContactReusableView;

@interface WCFinderSearchContactContainerReusableView : UICollectionReusableView
{
    WCFinderSearchContactReusableView *_contactView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactReusableView *contactView; // @synthesize contactView=_contactView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

