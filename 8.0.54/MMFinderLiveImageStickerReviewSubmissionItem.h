//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveImageStickerReviewSubmissionItem : NSObject
{
    NSString *_submissionId;
    UIImage *_image;
    NSString *_imageUri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUri; // @synthesize imageUri=_imageUri;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *submissionId; // @synthesize submissionId=_submissionId;
- (id)createSubmissionEntity;
- (void)prepareForSubmissionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool readyForSubmission;
- (id)initWithSubmissionId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

