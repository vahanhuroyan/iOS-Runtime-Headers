/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKAnnotationMarker, UIGestureRecognizer, MKWorldGestureController, UILabel, UILongPressGestureRecognizer, VKMapView, VKPuckAnimator, MKUserLocation, MKUserLocationMarker, UIView, <MKWorldViewDelegate>, UITapGestureRecognizer, MKWorldAnnotationManager, UIImageView, NSTimer;

@interface MKWorldViewInternal : NSObject  {
    UIView *contentView;
    VKMapView *mapView;
    MKWorldAnnotationManager *annotationManager;
    <MKWorldViewDelegate> *delegate;
    MKUserLocation *userLocation;
    MKUserLocationMarker *userLocationMarker;
    int userTrackingMode;
    UILabel *debugView;
    NSTimer *debugTimer;
    UIGestureRecognizer *debugConsoleGesture;
    UITapGestureRecognizer *selectingTapGestureRecognizer;
    UITapGestureRecognizer *nonselectingTapGestureRecognizer;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    VKPuckAnimator *userLocationAnimator;
    NSTimer *defaultLocationTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id annotationRectTest;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id annotationCoordinateTest;

    unsigned int effectsPauseCount;
    int originalLoopRate;
    int preGesturingLoopRate;
    UIImageView *attributionBadgeView;
    struct CGSize { 
        float width; 
        float height; 
    } attributionAnchorOffset;
    MKWorldGestureController *gestureController;
    BOOL shouldSplitRouteLine;
    VKAnnotationMarker *longPressStartAnnotationMarker;
    struct { 
        unsigned int showsUserLocation : 1; 
        unsigned int ignoreLocationUpdates : 1; 
        unsigned int debugConsoleEnabled : 1; 
        unsigned int inactive : 1; 
        unsigned int gesturing : 1; 
        unsigned int panning : 1; 
        unsigned int zooming : 1; 
        unsigned int rotating : 1; 
        unsigned int animatingRegionChange : 1; 
        unsigned int regionChangeIsAnimated : 1; 
        unsigned int canSelectPOIs : 1; 
        unsigned int canSelectAllLabels : 1; 
        unsigned int isDraggingAnnotationMarker : 1; 
        unsigned int userInteractionPausesLocationUpdates : 1; 
        unsigned int locationPropagationEnabled : 1; 
        unsigned int locationPulseEnabled : 1; 
        unsigned int allowsRotation : 1; 
        unsigned int rotationEnabled : 1; 
        unsigned int allowsTilt : 1; 
        unsigned int tiltEnabled : 1; 
        unsigned int loading : 1; 
        unsigned int delegateImplementsDidStartLoading : 1; 
        unsigned int delegateImplementsDidFinishLoading : 1; 
        unsigned int delegateImplementsDidFailLoading : 1; 
        unsigned int delegateImplementsDidBecomeFullyDrawn : 1; 
        unsigned int delegateImplementsMarkerForAnnotation : 1; 
        unsigned int delegateImplementsDidAddAnnotationMarkers : 1; 
        unsigned int delegateImplementsWillShowCalloutPopoverControllerForAnnotationMarker : 1; 
        unsigned int delegateImplementsWillShowCalloutPopoverControllerForLabelMarker : 1; 
        unsigned int delegateImplementsWillShowCalloutPopoverControllerForTrafficIncident : 1; 
        unsigned int delegateImplementsDidUpdateCalloutPopoverControllerForAnnotationMarker : 1; 
        unsigned int delegateImplementsDidUpdateCalloutPopoverControllerForLabelMarker : 1; 
        unsigned int delegateImplementsDidUpdateCalloutPopoverControllerForTrafficIncident : 1; 
        unsigned int delegateImplementsWillShowCalloutViewForAnnotationMarker : 1; 
        unsigned int delegateImplementsDidUpdateCalloutViewForAnnotationMarker : 1; 
        unsigned int delegateImplementsWillShowCalloutViewForLabelMarker : 1; 
        unsigned int delegateImplementsDidUpdateCalloutViewForLabelMarker : 1; 
        unsigned int delegateImplementsDidSelectAnnotationMarker : 1; 
        unsigned int delegateImplementsDidDeselectAnnotationMarker : 1; 
        unsigned int delegateImplementsCalloutAccessoryControlTapped : 1; 
        unsigned int delegateImplementsWillAnimateInAnnotationMarkers : 1; 
        unsigned int delegateImplementsDidAnimateInAnnotationMarkers : 1; 
        unsigned int delegateImplementsPainterForOverlay : 1; 
        unsigned int delegateImplementsDidChangeMapType : 1; 
        unsigned int delegateImplementsDidUpdateUserLocation : 1; 
        unsigned int delegateImplementsDidFailToLocateUser : 1; 
        unsigned int delegateImplementsDidChangeUserTrackingModeButton : 1; 
        unsigned int delegateImplementsDidChangeUserTrackingMode : 1; 
        unsigned int delegateImplementsDidChangeDragState : 1; 
        unsigned int delegateImplementsRegionWillChangeAnimated : 1; 
        unsigned int delegateImplementsRegionDidChangeAnimated : 1; 
        unsigned int delegateImplementsDidChangeVisibleRegion : 1; 
        unsigned int delegateImplementsShouldSelectLabelMarker : 1; 
        unsigned int delegateImplementsWillSelectLabelMarker : 1; 
        unsigned int delegateImplementsLabelMarkerCalloutAccessoryControlTapped : 1; 
        unsigned int delegateImplementsDidDeselectLabelMarker : 1; 
        unsigned int delegateImplementsDidBecomePitched : 1; 
        unsigned int delegateImplementsCanEnter3DModeDidChange : 1; 
        unsigned int delegateImplementsAllowsRotationDidChange : 1; 
        unsigned int delegateImplementsAllowsTiltDidChange : 1; 
        unsigned int delegateImplementsDidStartUserInteraction : 1; 
        unsigned int delegateImplementsDidStopUserInteraction : 1; 
        unsigned int delegateImplementsWillStartRespondingToGesture : 1; 
        unsigned int delegateImplementsDidStopRespondingToGesture : 1; 
        unsigned int delegateImplementsShouldDelayTapResponseForAnnotationMarker : 1; 
        unsigned int delegateImplementsRectToAvoidForCallout : 1; 
        unsigned int delegateImplementsCurrentRouteMatch : 1; 
        unsigned int delegateImplementsWillSelectTrafficIncident : 1; 
        unsigned int delegateImplementsTrafficIncidentCalloutAccessoryControlTapped : 1; 
        unsigned int delegateImplementsDidDeselectTrafficIncident : 1; 
        unsigned int delegateImplementsCanShowFlyover : 1; 
        unsigned int delegateImplementsShowingFlyover : 1; 
    } flags;
}



@end
