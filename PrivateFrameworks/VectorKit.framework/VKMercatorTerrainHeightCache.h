/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKMercatorTerrainHeightProvider>, NSMapTable;

@interface VKMercatorTerrainHeightCache : NSObject  {
    <VKMercatorTerrainHeightProvider> *_heightProvider;
    NSMapTable *_anchorToHeight;
}

@property <VKMercatorTerrainHeightProvider> * heightProvider;


- (void)dealloc;
- (id)heightProvider;
- (void)removeCachedValueForAnchor:(id)arg1;
- (double)heightForAnchor:(id)arg1;
- (void)invalidateRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)setHeightProvider:(id)arg1;

@end
