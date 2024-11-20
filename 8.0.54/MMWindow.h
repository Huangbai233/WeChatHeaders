//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@protocol WindowDelegate;

@interface MMWindow
{
    id <WindowDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WindowDelegate> m_delegate; // @synthesize m_delegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

