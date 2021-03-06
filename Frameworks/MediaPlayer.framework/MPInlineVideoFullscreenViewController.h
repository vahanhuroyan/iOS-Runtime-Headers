/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIView<MPVideoOverlay>, UIActivityIndicatorView, MPSwipableView, NSTimer, MPAVItem, UIPinchGestureRecognizer, MPInlineVideoController, UITapGestureRecognizer;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
    BOOL _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    NSTimer *_idleTimer;
    BOOL _isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    UIView<MPVideoOverlay> *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    float _savedWindowLevel;
    BOOL _shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property MPInlineVideoController * masterController;
@property(retain) MPAVItem * item;


- (void)setItem:(id)arg1;
- (void)_setStatusBarStyle;
- (id)masterController;
- (void)prepareForTransitionFromFullscreen;
- (void)_showOverlayDidEnd;
- (void)resetOverlayIdleTimer;
- (void)_overlayIdleTimerFired:(id)arg1;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)cancelOverlayIdleTimer;
- (void)updateOverlayView;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_viewWasPinched:(id)arg1;
- (void)setMasterController:(id)arg1;
- (void)showAlternateTracks;
- (void)overlayDidDismissAlternateTracksPopover:(id)arg1;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_windowWillRotate:(id)arg1;
- (id)item;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)wantsFullScreenLayout;

@end
