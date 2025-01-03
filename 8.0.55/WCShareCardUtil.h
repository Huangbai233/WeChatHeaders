//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCShareCardUtil
{
}

+ (id)genButtonWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (id)genLabelWithFont:(id)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (id)genStrokeLine:(struct CGRect)arg1 withColor:(struct CGColor *)arg2;
+ (_Bool)GetWCShareCardSyncInfoFileIsExist;
+ (_Bool)hasOpenShareCardEntrance;
+ (void)openShareCardEntrance;
+ (id)getUserRemarkname:(id)arg1;
+ (id)getUserNickname:(id)arg1;
+ (id)getWCNewShareCardLayoutCache;
+ (id)getWCShareCardLayoutCache;
+ (id)getWCShareCardDBPath;
+ (id)getWCShareCardSyncInfoPath;
+ (id)getUserWCShareCardRootDir;

@end

