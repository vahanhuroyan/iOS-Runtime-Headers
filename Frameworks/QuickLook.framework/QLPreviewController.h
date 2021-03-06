/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewControllerDelegate>, <QLPreviewControllerDataSource>, QLPreviewControllerReserved, <QLPreviewItem>;

@interface QLPreviewController : UIViewController  {
    QLPreviewControllerReserved *_reserved;
}

@property <QLPreviewControllerDataSource> * dataSource;
@property int currentPreviewItemIndex;
@property(readonly) <QLPreviewItem> * currentPreviewItem;
@property <QLPreviewControllerDelegate> * delegate;

+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (id)titleForPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (id)contentTypeForPreviewItem:(id)arg1;
+ (BOOL)_shouldPassThroughDocumentType:(id)arg1;
+ (id)_passThroughDocumentTypes;
+ (BOOL)canPreviewItem:(id)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;

- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (BOOL)overlayIsVisible;
- (id)_fixedSpaceItemWithWidth:(float)arg1;
- (void)_hideSliderInNavigationBar;
- (void)_showSliderInNavigationBar;
- (void)_fireOverlayIdleTimer;
- (void)_hideOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (void)_showOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (id)_currentNavigationController;
- (void)_updateActionItem;
- (void)_updateAVState;
- (void)_showBackgroundImage;
- (void)_hideBackgroundImage;
- (id)_flexibleSpaceItem;
- (id)_indexFormatter;
- (BOOL)_needsAVControls;
- (id)_newSegmentedArrowControl;
- (BOOL)inZoomAnimation;
- (void)_viewWillStartPresentWithTransition;
- (void)_removeFadingFilters;
- (void)_prepareForFullScreenZoomOut;
- (void)_addFadeAnimationToView:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 duration:(double)arg4 withCurve:(int)arg5;
- (void)_prepareForFullScreenZoomIn;
- (void)_setClippingViewActive:(BOOL)arg1;
- (void)_prepareTransitionImageForZoomingIn:(BOOL)arg1;
- (void)_dismissFromFullScreenWithDuration:(double)arg1;
- (void)_zoomToFullScreenWithDuration:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameWithoutOverlay;
- (void)progressViewWasTapped:(id)arg1;
- (id)printInfoForDocumentInteractionControllerInPopOverState:(id)arg1;
- (id)activityItemForDocumentInteractionControllerInPopOverState:(id)arg1;
- (id)popOverStateViewControllerForPreview:(id)arg1;
- (BOOL)canPrint;
- (void)playButtonAction:(id)arg1;
- (void)arrowsAction:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)customActionButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didUnloadItem:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (void)_openURL:(id)arg1 withApplicationProxy:(id)arg2;
- (id)_documentProxyForPreviewItem:(id)arg1;
- (BOOL)showActionAsDefaultButton;
- (void)setShowActionAsDefaultButton:(BOOL)arg1;
- (BOOL)useCustomActionButton;
- (void)setUseCustomActionButton:(BOOL)arg1;
- (BOOL)blockRemoteImages;
- (void)_removeProgressiveUIAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)prepareForPrinting;
- (BOOL)_canPrint;
- (void)rightArrowAction:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (id)_interactionController;
- (void)_updateRouteImages;
- (void)_removeChildPreviewContentControllerIfNeeded;
- (void)_createControls;
- (void)_configurePreviewContentController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentFrameForRemoteView;
- (void)_finishZoomingOut:(BOOL)arg1;
- (void)_finishZoomingIn:(BOOL)arg1;
- (void)_showProgressUI;
- (id)_currentPreviewItemURL;
- (void)_loadInternalViews;
- (void)_updateToolbarVisibility:(BOOL)arg1;
- (void)_contentWasTapped;
- (void)_cancelOverlayTimer;
- (void)_showGenericDisplayBundle;
- (void)_setupOverlayTimer;
- (void)_resumeDelayedTransition;
- (void)_hideProgressiveUI;
- (void)_tryAddingPreviewControllerToViewHierarchy;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 duration:(double)arg3;
- (id)_popOverState;
- (void)_setCurrentPreviewItemURL:(id)arg1;
- (void)_ensurePreviewContentController;
- (void)_scheduleDelayedTransitionIfNeeded;
- (void)_ensurePreviewItemIndex;
- (id)previewItemAtIndex:(int)arg1;
- (void)_updateNavigationBar:(BOOL)arg1;
- (void)_unloadInternalViews;
- (BOOL)translucent;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)mode;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (int)modalTransitionStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)barStyle;
- (void)setTranslucent:(BOOL)arg1;
- (void)setBarStyle:(int)arg1;
- (int)modalPresentationStyle;
- (void)_commonInit;
- (void)didReceiveMemoryWarning;
- (id)dataSource;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (int)currentPreviewItemIndex;
- (void)_prepareDelayedAppearance;
- (void)refreshCurrentPreviewItem;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (id)currentPreviewItem;
- (void)_updateToolbar:(BOOL)arg1;
- (BOOL)ckCanDismissWhenSuspending;

@end
