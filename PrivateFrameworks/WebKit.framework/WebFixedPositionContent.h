/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebFixedPositionContent : NSObject  {
    struct WebFixedPositionContentData { id x1; struct HashMap<WTF::RetainPtr<CALayer>, LayerInfo, WTF::PtrHash<WTF::RetainPtr<CALayer>>, WTF::HashTraits<WTF::RetainPtr<CALayer>>, WTF::HashTraits<LayerInfo> > { struct HashTable<WTF::RetainPtr<CALayer>, std::__1::pair<WTF::RetainPtr<CALayer>, LayerInfo>, WTF::PairFirstExtractor<std::__1::pair<WTF::RetainPtr<CALayer>, LayerInfo>>, WTF::PtrHash<WTF::RetainPtr<CALayer>>, WTF::HashMapValueTraits<WTF::HashTraits<WTF::RetainPtr<CALayer>>, WTF::HashTraits<LayerInfo>>, WTF::HashTraits<WTF::RetainPtr<CALayer>> > { struct pair<WTF::RetainPtr<CALayer>, LayerInfo> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; } *_private;
}


- (void)dealloc;
- (void)didFinishScrollingOrZooming;
- (id)initWithWebView:(id)arg1;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasFixedPositionLayers;
- (void)removeAllLayers;
- (void)removeLayer:(id)arg1 insideLayerSync:(BOOL)arg2;
- (void)addOrUpdateLayer:(id)arg1 sizing:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 alignmentOffset:(struct CGSize { float x1; float x2; })arg4 insideLayerSync:(BOOL)arg5;
- (void)unlockLayers;
- (void)lockLayers;

@end
