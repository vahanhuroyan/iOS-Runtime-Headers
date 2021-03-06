/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADFontReference, OADStyleMatrixReference;

@interface OADShapeStyle : NSObject <NSCopying> {
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setFontReference:(id)arg1;
- (void)setEffectReference:(id)arg1;
- (void)setFillReference:(id)arg1;
- (void)setLineReference:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (void)applyToParagraphProperties:(id)arg1;
- (id)fontReference;
- (id)effectReference;
- (id)lineReference;
- (id)fillReference;
- (void)setEffectMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4;
- (void)setLineMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (void)setFillMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (void)applyToTextBody:(id)arg1;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2;

@end
