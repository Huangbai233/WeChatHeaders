//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@protocol SendPatToastWindowDelegate;

@interface SendPatToastWindow
{
    id <SendPatToastWindowDelegate> _delegate;
    struct CGRect _toastFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect toastFrame; // @synthesize toastFrame=_toastFrame;
@property(nonatomic) __weak id <SendPatToastWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

