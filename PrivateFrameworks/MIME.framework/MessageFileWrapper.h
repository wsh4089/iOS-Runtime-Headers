/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, NSString, NSData;

@interface MessageFileWrapper : NSObject {
    NSMutableDictionary *_attributes;
    NSData *_data;
    NSString *_filename;
    NSString *_linkDestination;
    NSString *_path;
    NSString *_preferredFilename;
    int _type;
    NSString *_url;
}

- (id)URL;
- (void)_isImage:(BOOL*)arg1 orPDFFile:(BOOL*)arg2;
- (id)contentID;
- (unsigned long)creator;
- (void)dealloc;
- (id)description;
- (id)eventUniqueID;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (unsigned short)finderFlags;
- (id)inferredMimeType;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)isDirectory;
- (BOOL)isDisplayableByWebKit;
- (BOOL)isImageFile;
- (BOOL)isMedia;
- (BOOL)isPDFFile;
- (BOOL)isPlaceholder;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)meetingStorePersistentID;
- (id)messageID;
- (id)mimeType;
- (float)minimumZoomFontSize;
- (id)path;
- (id)preferredFilename;
- (id)preferredFilenameStrippingZipIfNeededUseApplications:(BOOL)arg1;
- (id)regularFileContents;
- (void)setContentID:(id)arg1;
- (void)setCreator:(unsigned long)arg1;
- (void)setEventUniqueID:(id)arg1;
- (void)setFileAttributes:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFinderFlags:(unsigned short)arg1;
- (void)setMeetingStorePersistentID:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (void)setType:(unsigned long)arg1;
- (void)setURL:(id)arg1;
- (id)symbolicLinkDestination;
- (unsigned long)type;

@end