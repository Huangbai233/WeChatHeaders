//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class AVCaptureConnection, AVCaptureOutput;

@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>

@optional
- (void)captureOutput:(AVCaptureOutput *)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;
@end

