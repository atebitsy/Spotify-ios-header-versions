//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileArtistAbout_AboutAutobiographyEventFactory, SPTUBIMobileArtistAbout_AboutBiographyEventFactory, SPTUBIMobileArtistAbout_GalleryEventFactory, SPTUBIMobileArtistAbout_SocialFacebookLinkEventFactory, SPTUBIMobileArtistAbout_SocialInstagramLinkEventFactory, SPTUBIMobileArtistAbout_SocialTwitterLinkEventFactory, SPTUBIMobileArtistAbout_SocialWikipediaLinkEventFactory;

@protocol SPTUBIMobileArtistAboutEventFactory <NSObject>
- (id <SPTUBIMobileArtistAbout_SocialFacebookLinkEventFactory>)socialFacebookLinkFactory;
- (id <SPTUBIMobileArtistAbout_SocialInstagramLinkEventFactory>)socialInstagramLinkFactory;
- (id <SPTUBIMobileArtistAbout_SocialTwitterLinkEventFactory>)socialTwitterLinkFactory;
- (id <SPTUBIMobileArtistAbout_SocialWikipediaLinkEventFactory>)socialWikipediaLinkFactory;
- (id <SPTUBIMobileArtistAbout_AboutAutobiographyEventFactory>)aboutAutobiographyFactory;
- (id <SPTUBIMobileArtistAbout_AboutBiographyEventFactory>)aboutBiographyFactory;
- (id <SPTUBIMobileArtistAbout_GalleryEventFactory>)galleryFactory;
- (id <SPTUBIEventLocation>)_location;
@end

