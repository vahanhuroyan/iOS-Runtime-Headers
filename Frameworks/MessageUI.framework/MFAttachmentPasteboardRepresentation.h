/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSData;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSCoding, MFAttachmentPasteboardRepresentation> {
    NSString *_name;
    NSData *_data;
    NSString *_mimeType;
}

@property(retain) NSData * data;
@property(retain) NSString * name;
@property(retain) NSString * mimeType;
@property(getter=isValid,readonly) BOOL valid;


- (void)setName:(id)arg1;
- (id)name;
- (id)data;
- (void)dealloc;
- (id)mimeType;
- (void)setData:(id)arg1;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (void)setMimeType:(id)arg1;

@end
