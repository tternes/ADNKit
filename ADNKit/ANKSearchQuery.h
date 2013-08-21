//
//  ANKSearchQuery.h
//  ADNKit
//
//  Created by Kolin Krewinkel on 7/25/13.
//  Copyright (c) 2013 Afterwork Studios. All rights reserved.
//

typedef enum {
    ANKSearchQueryIndexTypeComplete
} ANKSearchQueryIndexType;

typedef enum {
    ANKSearchQueryOrderTypeID,
    ANKSearchQueryOrderTypeScore
} ANKSearchQueryOrderType;

@interface ANKSearchQuery : ANKResource

#pragma mark -
#pragma mark General Parameters

@property (nonatomic) ANKSearchQueryIndexType indexType;
@property (nonatomic) ANKSearchQueryOrderType orderType;

#pragma mark -
#pragma mark Search Query Parameters

@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *hashtags;
@property (nonatomic, copy) NSArray *links;
@property (nonatomic, copy) NSArray *linkDomains;
@property (nonatomic, copy) NSArray *mentions;
@property (nonatomic, copy) NSArray *leadingMentions;

#pragma mark -
#pragma mark Filter Parameters

@property (nonatomic, copy) NSArray *annotationTypes;
@property (nonatomic, copy) NSArray *attachmentTypes;
@property (nonatomic, copy) NSURL *crosspostURL;
@property (nonatomic, copy) NSURL *crosspostDomain;
@property (nonatomic, copy) NSString *placeID;
@property (nonatomic) BOOL isReply;
@property (nonatomic) BOOL isDirected;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasCheckin;
@property (nonatomic) BOOL isCrosspost;
@property (nonatomic) BOOL hasAttachment;
@property (nonatomic) BOOL hasOEmbedPhoto;
@property (nonatomic) BOOL hasOEmbedVideo;
@property (nonatomic) BOOL hasOEmbedHTML5Video;
@property (nonatomic) BOOL hasOEmbedRich;
@property (nonatomic, copy) NSString *language; // This could potentially be an NSLocale, but I'm not sure if people would want that.
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) NSString *creatorID;
@property (nonatomic, copy) NSString *replyTo;
@property (nonatomic, copy) NSString *threadID;

@end
