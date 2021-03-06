/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject <MPMediaPlayback> {
    MPMusicPlayerControllerInternal *_internal;
}

@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;

+ (id)applicationMusicPlayer;
+ (id)iPodMusicPlayer;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)runLoopForNotifications;
+ (void)initialize;

- (void)setShuffleMode:(int)arg1;
- (void)setRepeatMode:(int)arg1;
- (int)shuffleMode;
- (int)repeatMode;
- (id)nowPlayingItem;
- (double)currentPlaybackTime;
- (void)setQueueWithQuery:(id)arg1;
- (void)endSeeking;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (int)playbackState;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)_musicPlayerDidLaunch;
- (void)setUseCachedPlaybackState:(BOOL)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_isQueuePreparedDidChange:(BOOL)arg1;
- (void)_repeatModeDidChange:(int)arg1;
- (void)_shuffleModeDidChange:(int)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(int)arg1;
- (BOOL)serverIsAlive;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (unsigned int)currentChapterIndex;
- (BOOL)isNowPlayingItemFromGeniusMix;
- (unsigned int)unshuffledIndexOfNowPlayingItem;
- (unsigned int)indexOfNowPlayingItem;
- (void)setPlaybackSpeed:(int)arg1;
- (int)playbackSpeed;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (BOOL)allowsRemoteUIAccess;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (id)nowPlayingItemAtIndex:(unsigned int)arg1;
- (BOOL)setQueueWithSeedItems:(id)arg1;
- (BOOL)isGeniusAvailableForSeedItems:(id)arg1;
- (BOOL)isGeniusAvailable;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)_unregisterForLaunchNotifications;
- (void)_stopMigServer;
- (BOOL)_musicPlayerExistencePortIsValid;
- (void)_clientCheckInUsingExistencePort:(BOOL)arg1;
- (void)_registerForLaunchNotifications;
- (void)_serverDied:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (BOOL)isPreparedToPlay;
- (void)prepareToPlay;
- (void)dealloc;
- (id)init;
- (void)pause;
- (void)stop;
- (unsigned int)numberOfItems;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)play;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
