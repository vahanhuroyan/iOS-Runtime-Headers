/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct FileChooser { int x1; struct FileChooserClient {} *x2; struct FileChooserSettings { boolx_3_1_1; struct Vector<WTF::String, 0> { unsigned int x_2_2_1; struct VectorBuffer<WTF::String, 0> { struct String {} *x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_3_1_2; struct Vector<WTF::String, 0> { unsigned int x_3_2_1; struct VectorBuffer<WTF::String, 0> { struct String {} *x_2_3_1; unsigned int x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; } *_chooser;
}


- (void)cancel;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilename:(id)arg1;
- (id)initWithChooser:(struct PassRefPtr<WebCore::FileChooser> { struct FileChooser {} *x1; })arg1;

@end
