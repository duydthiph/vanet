//
// Generated file, do not edit! Created by nedtool 5.0 from messages/V2VMessage.msg.
//

#ifndef __V2VMESSAGE_M_H
#define __V2VMESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
	#include "veins/modules/messages/WaveShortMessage_m.h"
// }}

/**
 * Enum generated from <tt>messages/V2VMessage.msg:8</tt> by nedtool.
 * <pre>
 * enum PayloadType
 * {
 * 
 *     TRAFFIC_UPDATE = 0;
 *     VIRUS = 1;
 *     PATCH = 2;
 *     REGEN_PATCH = 3;
 * }
 * </pre>
 */
enum PayloadType {
    TRAFFIC_UPDATE = 0,
    VIRUS = 1,
    PATCH = 2,
    REGEN_PATCH = 3
};

/**
 * Class generated from <tt>messages/V2VMessage.msg:15</tt> by nedtool.
 * <pre>
 * packet V2VMessage extends WaveShortMessage
 * {
 *     simtime_t creationTime;
 *     Coord senderPosition;
 *     int hops;
 *     int payloadType @enum(PayloadType);
 * }
 * </pre>
 */
class V2VMessage : public ::WaveShortMessage
{
  protected:
    ::omnetpp::simtime_t creationTime;
    Coord senderPosition;
    int hops;
    int payloadType;

  private:
    void copy(const V2VMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const V2VMessage&);

  public:
    V2VMessage(const char *name=nullptr, int kind=0);
    V2VMessage(const V2VMessage& other);
    virtual ~V2VMessage();
    V2VMessage& operator=(const V2VMessage& other);
    virtual V2VMessage *dup() const {return new V2VMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getCreationTime() const;
    virtual void setCreationTime(::omnetpp::simtime_t creationTime);
    virtual Coord& getSenderPosition();
    virtual const Coord& getSenderPosition() const {return const_cast<V2VMessage*>(this)->getSenderPosition();}
    virtual void setSenderPosition(const Coord& senderPosition);
    virtual int getHops() const;
    virtual void setHops(int hops);
    virtual int getPayloadType() const;
    virtual void setPayloadType(int payloadType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const V2VMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, V2VMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef __V2VMESSAGE_M_H

