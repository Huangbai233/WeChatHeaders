//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface QMapCoordinatePoint : NSObject
{
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

@end
