/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchRequest : GEOPlaceSearchRequest {
    unsigned short _provider;
    int _type;
    int _zoomLevel;
}

@property unsigned short provider;
@property int type;
@property int zoomLevel;

- (id)init;
- (unsigned short)provider;
- (Class)responseClass;
- (void)setProvider:(unsigned short)arg1;
- (void)setType:(int)arg1;
- (void)setZoomLevel:(int)arg1;
- (int)type;
- (int)zoomLevel;

@end