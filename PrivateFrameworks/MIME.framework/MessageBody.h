/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;

@interface MessageBody : NSObject  {
    Message *_message;
}


- (void)dealloc;
- (BOOL)isRich;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (id)message;
- (id)rawData;
- (void)setMessage:(id)arg1;
- (unsigned int)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)attachments;
- (BOOL)isHTML;
- (id)textHtmlPart;

@end