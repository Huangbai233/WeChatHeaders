//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MusicLogInfo : NSObject
{
    unsigned int _playerType;
    NSString *_musicId;
    NSString *_musicTitle;
    NSString *_singer;
    NSString *_appID;
    unsigned int _musicDuaration;
    unsigned int _duarationToPlay;
    unsigned int _duarationOnForeground;
    _Bool _bTakeScreenShotAtFirstPage;
    _Bool _bTakeScreenShotAtFullLyricPage;
    unsigned int _musicPlayerEntranceType;
    _Bool _bSwipeToNext;
    _Bool _bSwipeToPrevious;
    unsigned int _playModeWhenStop;
    _Bool _bShowFullLyricPage;
    _Bool _bShowFirstPage;
    _Bool _bEasterEggToPlayAll;
    _Bool _bEasterEggToPlayOne;
    NSString *_albumName;
    unsigned int _lastPlayTime;
    unsigned int _realPlayTime;
    NSString *_brandMusicId;
    NSString *_reportStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportStr; // @synthesize reportStr=_reportStr;
@property(nonatomic) unsigned int realPlayTime; // @synthesize realPlayTime=_realPlayTime;
@property(nonatomic) unsigned int lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(retain, nonatomic) NSString *brandMusicId; // @synthesize brandMusicId=_brandMusicId;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) _Bool bEasterEggToPlayOne; // @synthesize bEasterEggToPlayOne=_bEasterEggToPlayOne;
@property(nonatomic) _Bool bEasterEggToPlayAll; // @synthesize bEasterEggToPlayAll=_bEasterEggToPlayAll;
@property(nonatomic) _Bool bShowFirstPage; // @synthesize bShowFirstPage=_bShowFirstPage;
@property(nonatomic) _Bool bShowFullLyricPage; // @synthesize bShowFullLyricPage=_bShowFullLyricPage;
@property(nonatomic) unsigned int playModeWhenStop; // @synthesize playModeWhenStop=_playModeWhenStop;
@property(nonatomic) _Bool bSwipeToPrevious; // @synthesize bSwipeToPrevious=_bSwipeToPrevious;
@property(nonatomic) _Bool bSwipeToNext; // @synthesize bSwipeToNext=_bSwipeToNext;
@property(nonatomic) unsigned int musicPlayerEntranceType; // @synthesize musicPlayerEntranceType=_musicPlayerEntranceType;
@property(nonatomic) _Bool bTakeScreenShotAtFullLyricPage; // @synthesize bTakeScreenShotAtFullLyricPage=_bTakeScreenShotAtFullLyricPage;
@property(nonatomic) _Bool bTakeScreenShotAtFirstPage; // @synthesize bTakeScreenShotAtFirstPage=_bTakeScreenShotAtFirstPage;
@property(nonatomic) unsigned int duarationOnForeground; // @synthesize duarationOnForeground=_duarationOnForeground;
@property(nonatomic) unsigned int duarationToPlay; // @synthesize duarationToPlay=_duarationToPlay;
@property(nonatomic) unsigned int musicDuaration; // @synthesize musicDuaration=_musicDuaration;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *musicTitle; // @synthesize musicTitle=_musicTitle;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) unsigned int playerType; // @synthesize playerType=_playerType;
- (_Bool)hasSildeVertical;
- (_Bool)hasSwiped;
- (id)genLogInfo13044;
- (id)genLogInfo;
- (void)resetMusicPlayerEntranceType;
- (void)resetLogStat;
- (id)init;

@end

