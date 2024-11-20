//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class HbEnvelopSource;

@protocol WCRedEnvelopeSelectSkinFlowViewDelegate <NSObject>
- (void)onWCRedEnvelopeSelectSkinFlowViewGotoPreview:(HbEnvelopSource *)arg1;
- (void)onWCRedEnvelopeSelectSkinFlowViewDeleteHbResource:(HbEnvelopSource *)arg1;
- (void)onWCRedEnvelopeSelectSkinFlowViewClickExpiredEntry;
- (void)onWCRedEnvelopeSelectSkinFlowViewSelectHbResource:(HbEnvelopSource *)arg1;
@end
